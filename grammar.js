const PREC = {
  COMMENT : 1, // Prefer comments over regexes
  STRING : 2   // In a string, prefer string characters over comments
};

module.exports = grammar({
  name : 'hit',
  extras : $ => [$._comment, /[\s]/],

  rules : {
    // TODO: add the actual grammar rules
    source_file : $ => repeat($._definition),

    _definition : $ => choice($.parameter_definition, $.top_block),
    _sub_definition : $ => choice($.parameter_definition, $.block),

    parameter_definition : $ => seq($.parameter_name, '=', $.parameter_value),

    top_block : $ => seq($._block_head, repeat($._sub_definition), '[]'),
    block : $ => seq($._block_head, repeat($._sub_definition), $._block_foot),

    _block_head : $ => seq('[', $.block_path, ']'),
    _block_foot : $ => choice('[]', '[../]'),

    block_path : $ => $._path,
    parameter_name : $ => $._path,
    parameter_value : $ => $._string,

    _string : $ =>
        choice(/[^\s\'\"]+/,
               seq('\'',
                   repeat(choice(token.immediate(prec(PREC.STRING, /[^\']+/)),
                                 $.escape_sequence)),
                   '\''),
               seq('"',
                   repeat(choice(token.immediate(prec(PREC.STRING, /[^\"]+/)),
                                 $.escape_sequence)),
                   '"')),
    escape_sequence : $ => token.immediate(
        seq('\\', choice(/[^xu0-7]/, /[0-7]{1,3}/, /x[0-9a-fA-F]{2}/,
                         /u[0-9a-fA-F]{4}/, /u{[0-9a-fA-F]+}/))),

    _path : $ => /[a-zA-Z0-9_./:<>+\-]+/,

    _comment : $ => token(prec(PREC.COMMENT, seq('#', /.*/)))
  }
});

// PREC.STRING, /[^'\\\n]+|\\\r?\n/)),
// extras : $ => [$.comment, /[\s\uFEFF\u2060\u200B\u00A0]/]
