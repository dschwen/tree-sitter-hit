module.exports = grammar({
  name : 'hit',

  rules : {
    // TODO: add the actual grammar rules
    source_file : $ => repeat($._definition),

    _definition : $ => choice($.parameter_definition, $.top_block),

    _sub_definition : $ => choice($.parameter_definition, $.block),

    parameter_definition : $ => seq($.parameter_name, '=', $.string),

    block : $ => seq($.block_head, repeat($._sub_definition), $.block_foot),

    top_block : $ => seq($.block_head, repeat($._sub_definition), '[]'),

    block_head : $ => seq('[', $.block_path, ']'),

    block_foot : $ => choice('[]', '[../]'),

    top_block_head : $ => seq('[', $.block_path, ']'),

    block_path : $ => /[A-Za-z/\.]+/,

    parameter_name : $ => /[a-z]+/,

    number : $ => /\d+/,

    string : $ => /[A-Za-z_\d]+/
  }
});
