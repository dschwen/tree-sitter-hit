#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 11
#define STATE_COUNT 49
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 30
#define ALIAS_COUNT 0
#define TOKEN_COUNT 14
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 3

enum {
  anon_sym_EQ = 1,
  anon_sym_LBRACK_RBRACK = 2,
  anon_sym_LBRACK = 3,
  anon_sym_RBRACK = 4,
  anon_sym_LBRACK_DOT_DOT_SLASH_RBRACK = 5,
  aux_sym__string_token1 = 6,
  anon_sym_SQUOTE = 7,
  aux_sym__string_token2 = 8,
  anon_sym_DQUOTE = 9,
  aux_sym__string_token3 = 10,
  sym_escape_sequence = 11,
  sym__path = 12,
  sym__comment = 13,
  sym_source_file = 14,
  sym__definition = 15,
  sym__sub_definition = 16,
  sym_parameter_definition = 17,
  sym_top_block = 18,
  sym_block = 19,
  sym__block_head = 20,
  sym__block_foot = 21,
  sym_block_path = 22,
  sym_parameter_name = 23,
  sym_parameter_value = 24,
  sym__string = 25,
  aux_sym_source_file_repeat1 = 26,
  aux_sym_top_block_repeat1 = 27,
  aux_sym__string_repeat1 = 28,
  aux_sym__string_repeat2 = 29,
};

static const char *ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_EQ] = "=",
  [anon_sym_LBRACK_RBRACK] = "[]",
  [anon_sym_LBRACK] = "[",
  [anon_sym_RBRACK] = "]",
  [anon_sym_LBRACK_DOT_DOT_SLASH_RBRACK] = "[../]",
  [aux_sym__string_token1] = "_string_token1",
  [anon_sym_SQUOTE] = "'",
  [aux_sym__string_token2] = "_string_token2",
  [anon_sym_DQUOTE] = "\"",
  [aux_sym__string_token3] = "_string_token3",
  [sym_escape_sequence] = "escape_sequence",
  [sym__path] = "_path",
  [sym__comment] = "_comment",
  [sym_source_file] = "source_file",
  [sym__definition] = "_definition",
  [sym__sub_definition] = "_sub_definition",
  [sym_parameter_definition] = "parameter_definition",
  [sym_top_block] = "top_block",
  [sym_block] = "block",
  [sym__block_head] = "_block_head",
  [sym__block_foot] = "_block_foot",
  [sym_block_path] = "block_path",
  [sym_parameter_name] = "parameter_name",
  [sym_parameter_value] = "parameter_value",
  [sym__string] = "_string",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_top_block_repeat1] = "top_block_repeat1",
  [aux_sym__string_repeat1] = "_string_repeat1",
  [aux_sym__string_repeat2] = "_string_repeat2",
};

static TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_EQ] = anon_sym_EQ,
  [anon_sym_LBRACK_RBRACK] = anon_sym_LBRACK_RBRACK,
  [anon_sym_LBRACK] = anon_sym_LBRACK,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
  [anon_sym_LBRACK_DOT_DOT_SLASH_RBRACK] = anon_sym_LBRACK_DOT_DOT_SLASH_RBRACK,
  [aux_sym__string_token1] = aux_sym__string_token1,
  [anon_sym_SQUOTE] = anon_sym_SQUOTE,
  [aux_sym__string_token2] = aux_sym__string_token2,
  [anon_sym_DQUOTE] = anon_sym_DQUOTE,
  [aux_sym__string_token3] = aux_sym__string_token3,
  [sym_escape_sequence] = sym_escape_sequence,
  [sym__path] = sym__path,
  [sym__comment] = sym__comment,
  [sym_source_file] = sym_source_file,
  [sym__definition] = sym__definition,
  [sym__sub_definition] = sym__sub_definition,
  [sym_parameter_definition] = sym_parameter_definition,
  [sym_top_block] = sym_top_block,
  [sym_block] = sym_block,
  [sym__block_head] = sym__block_head,
  [sym__block_foot] = sym__block_foot,
  [sym_block_path] = sym_block_path,
  [sym_parameter_name] = sym_parameter_name,
  [sym_parameter_value] = sym_parameter_value,
  [sym__string] = sym__string,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_top_block_repeat1] = aux_sym_top_block_repeat1,
  [aux_sym__string_repeat1] = aux_sym__string_repeat1,
  [aux_sym__string_repeat2] = aux_sym__string_repeat2,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACK_RBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACK_DOT_DOT_SLASH_RBRACK] = {
    .visible = true,
    .named = false,
  },
  [aux_sym__string_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_SQUOTE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym__string_token2] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_DQUOTE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym__string_token3] = {
    .visible = false,
    .named = false,
  },
  [sym_escape_sequence] = {
    .visible = true,
    .named = true,
  },
  [sym__path] = {
    .visible = false,
    .named = true,
  },
  [sym__comment] = {
    .visible = false,
    .named = true,
  },
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym__definition] = {
    .visible = false,
    .named = true,
  },
  [sym__sub_definition] = {
    .visible = false,
    .named = true,
  },
  [sym_parameter_definition] = {
    .visible = true,
    .named = true,
  },
  [sym_top_block] = {
    .visible = true,
    .named = true,
  },
  [sym_block] = {
    .visible = true,
    .named = true,
  },
  [sym__block_head] = {
    .visible = false,
    .named = true,
  },
  [sym__block_foot] = {
    .visible = false,
    .named = true,
  },
  [sym_block_path] = {
    .visible = true,
    .named = true,
  },
  [sym_parameter_name] = {
    .visible = true,
    .named = true,
  },
  [sym_parameter_value] = {
    .visible = true,
    .named = true,
  },
  [sym__string] = {
    .visible = false,
    .named = true,
  },
  [aux_sym_source_file_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_top_block_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__string_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__string_repeat2] = {
    .visible = false,
    .named = false,
  },
};

static TSSymbol ts_alias_sequences[1][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(16);
      if (lookahead == '"') ADVANCE(37);
      if (lookahead == '#') ADVANCE(55);
      if (lookahead == '\'') ADVANCE(24);
      if (lookahead == '=') ADVANCE(17);
      if (lookahead == '[') ADVANCE(19);
      if (lookahead == '\\') ADVANCE(7);
      if (lookahead == ']') ADVANCE(21);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(14)
      if (lookahead == '+' ||
          ('-' <= lookahead && lookahead <= ':') ||
          ('<' <= lookahead && lookahead <= '>') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(53);
      END_STATE();
    case 1:
      if (lookahead == '"') ADVANCE(37);
      if (lookahead == '#') ADVANCE(54);
      if (lookahead == '\'') ADVANCE(24);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(1)
      if (lookahead != 0) ADVANCE(23);
      END_STATE();
    case 2:
      if (lookahead == '"') ADVANCE(37);
      if (lookahead == '#') ADVANCE(38);
      if (lookahead == '\\') ADVANCE(40);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(39);
      if (lookahead != 0) ADVANCE(49);
      END_STATE();
    case 3:
      if (lookahead == '#') ADVANCE(25);
      if (lookahead == '\'') ADVANCE(24);
      if (lookahead == '\\') ADVANCE(27);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(26);
      if (lookahead != 0) ADVANCE(36);
      END_STATE();
    case 4:
      if (lookahead == '.') ADVANCE(5);
      END_STATE();
    case 5:
      if (lookahead == '/') ADVANCE(6);
      END_STATE();
    case 6:
      if (lookahead == ']') ADVANCE(22);
      END_STATE();
    case 7:
      if (lookahead == 'u') ADVANCE(8);
      if (lookahead == 'x') ADVANCE(13);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(52);
      if (lookahead != 0) ADVANCE(50);
      END_STATE();
    case 8:
      if (lookahead == '{') ADVANCE(12);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(10);
      END_STATE();
    case 9:
      if (lookahead == '}') ADVANCE(50);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(9);
      END_STATE();
    case 10:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(13);
      END_STATE();
    case 11:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(50);
      END_STATE();
    case 12:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(9);
      END_STATE();
    case 13:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(11);
      END_STATE();
    case 14:
      if (eof) ADVANCE(16);
      if (lookahead == '"') ADVANCE(37);
      if (lookahead == '#') ADVANCE(55);
      if (lookahead == '\'') ADVANCE(24);
      if (lookahead == '=') ADVANCE(17);
      if (lookahead == '[') ADVANCE(19);
      if (lookahead == ']') ADVANCE(21);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(14)
      if (lookahead == '+' ||
          ('-' <= lookahead && lookahead <= ':') ||
          ('<' <= lookahead && lookahead <= '>') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(53);
      END_STATE();
    case 15:
      if (eof) ADVANCE(16);
      if (lookahead == '#') ADVANCE(55);
      if (lookahead == '[') ADVANCE(20);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(15)
      if (lookahead == '+' ||
          ('-' <= lookahead && lookahead <= ':') ||
          lookahead == '<' ||
          lookahead == '>' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(53);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(anon_sym_LBRACK_RBRACK);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      if (lookahead == '.') ADVANCE(4);
      if (lookahead == ']') ADVANCE(18);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      if (lookahead == ']') ADVANCE(18);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(anon_sym_LBRACK_DOT_DOT_SLASH_RBRACK);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(aux_sym__string_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'') ADVANCE(23);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(aux_sym__string_token2);
      if (lookahead == '\n') ADVANCE(36);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(25);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(aux_sym__string_token2);
      if (lookahead == '#') ADVANCE(25);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(26);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(36);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(aux_sym__string_token2);
      if (lookahead == 'u') ADVANCE(28);
      if (lookahead == 'x') ADVANCE(35);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(31);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(36);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(aux_sym__string_token2);
      if (lookahead == '{') ADVANCE(34);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(33);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(36);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(aux_sym__string_token2);
      if (lookahead == '}') ADVANCE(36);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(29);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(36);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(aux_sym__string_token2);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(36);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(36);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(aux_sym__string_token2);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(30);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(36);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(aux_sym__string_token2);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(36);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(36);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(aux_sym__string_token2);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(35);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(36);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(aux_sym__string_token2);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(29);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(36);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(aux_sym__string_token2);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(32);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(36);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(aux_sym__string_token2);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(36);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(aux_sym__string_token3);
      if (lookahead == '\n') ADVANCE(49);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(38);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(aux_sym__string_token3);
      if (lookahead == '#') ADVANCE(38);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(39);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(49);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(aux_sym__string_token3);
      if (lookahead == 'u') ADVANCE(41);
      if (lookahead == 'x') ADVANCE(48);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(44);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(49);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(aux_sym__string_token3);
      if (lookahead == '{') ADVANCE(47);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(46);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(49);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(aux_sym__string_token3);
      if (lookahead == '}') ADVANCE(49);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(42);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(49);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(aux_sym__string_token3);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(49);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(49);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(aux_sym__string_token3);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(43);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(49);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(aux_sym__string_token3);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(49);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(49);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(aux_sym__string_token3);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(48);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(49);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(aux_sym__string_token3);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(42);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(49);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(aux_sym__string_token3);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(45);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(49);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(aux_sym__string_token3);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(49);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(sym_escape_sequence);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(sym_escape_sequence);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(50);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(sym_escape_sequence);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(51);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(sym__path);
      if (lookahead == '+' ||
          ('-' <= lookahead && lookahead <= ':') ||
          lookahead == '<' ||
          lookahead == '>' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(53);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(sym__comment);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == '"' ||
          lookahead == '\'') ADVANCE(55);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(54);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(sym__comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(55);
      END_STATE();
    default:
      return false;
  }
}

static TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 15},
  [2] = {.lex_state = 0},
  [3] = {.lex_state = 0},
  [4] = {.lex_state = 0},
  [5] = {.lex_state = 0},
  [6] = {.lex_state = 0},
  [7] = {.lex_state = 15},
  [8] = {.lex_state = 15},
  [9] = {.lex_state = 15},
  [10] = {.lex_state = 15},
  [11] = {.lex_state = 15},
  [12] = {.lex_state = 1},
  [13] = {.lex_state = 1},
  [14] = {.lex_state = 0},
  [15] = {.lex_state = 0},
  [16] = {.lex_state = 2},
  [17] = {.lex_state = 3},
  [18] = {.lex_state = 2},
  [19] = {.lex_state = 3},
  [20] = {.lex_state = 3},
  [21] = {.lex_state = 2},
  [22] = {.lex_state = 15},
  [23] = {.lex_state = 15},
  [24] = {.lex_state = 0},
  [25] = {.lex_state = 15},
  [26] = {.lex_state = 3},
  [27] = {.lex_state = 2},
  [28] = {.lex_state = 15},
  [29] = {.lex_state = 3},
  [30] = {.lex_state = 2},
  [31] = {.lex_state = 0},
  [32] = {.lex_state = 0},
  [33] = {.lex_state = 0},
  [34] = {.lex_state = 0},
  [35] = {.lex_state = 15},
  [36] = {.lex_state = 15},
  [37] = {.lex_state = 15},
  [38] = {.lex_state = 15},
  [39] = {.lex_state = 15},
  [40] = {.lex_state = 0},
  [41] = {.lex_state = 0},
  [42] = {.lex_state = 0},
  [43] = {.lex_state = 0},
  [44] = {.lex_state = 0},
  [45] = {.lex_state = 0},
  [46] = {.lex_state = 0},
  [47] = {.lex_state = 0},
  [48] = {.lex_state = 0},
};

static uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_LBRACK_RBRACK] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [anon_sym_LBRACK_DOT_DOT_SLASH_RBRACK] = ACTIONS(1),
    [anon_sym_SQUOTE] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [sym_escape_sequence] = ACTIONS(1),
    [sym__path] = ACTIONS(1),
    [sym__comment] = ACTIONS(3),
  },
  [1] = {
    [sym_source_file] = STATE(46),
    [sym__definition] = STATE(9),
    [sym_parameter_definition] = STATE(9),
    [sym_top_block] = STATE(9),
    [sym__block_head] = STATE(8),
    [sym_parameter_name] = STATE(43),
    [aux_sym_source_file_repeat1] = STATE(9),
    [ts_builtin_sym_end] = ACTIONS(5),
    [anon_sym_LBRACK] = ACTIONS(7),
    [sym__path] = ACTIONS(9),
    [sym__comment] = ACTIONS(3),
  },
};

static uint16_t ts_small_parse_table[] = {
  [0] = 8,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(9), 1,
      sym__path,
    ACTIONS(13), 1,
      anon_sym_LBRACK,
    STATE(2), 1,
      sym__block_head,
    STATE(32), 1,
      sym__block_foot,
    STATE(48), 1,
      sym_parameter_name,
    ACTIONS(11), 2,
      anon_sym_LBRACK_RBRACK,
      anon_sym_LBRACK_DOT_DOT_SLASH_RBRACK,
    STATE(3), 4,
      sym__sub_definition,
      sym_parameter_definition,
      sym_block,
      aux_sym_top_block_repeat1,
  [29] = 8,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(9), 1,
      sym__path,
    ACTIONS(13), 1,
      anon_sym_LBRACK,
    STATE(2), 1,
      sym__block_head,
    STATE(33), 1,
      sym__block_foot,
    STATE(48), 1,
      sym_parameter_name,
    ACTIONS(15), 2,
      anon_sym_LBRACK_RBRACK,
      anon_sym_LBRACK_DOT_DOT_SLASH_RBRACK,
    STATE(6), 4,
      sym__sub_definition,
      sym_parameter_definition,
      sym_block,
      aux_sym_top_block_repeat1,
  [58] = 8,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(9), 1,
      sym__path,
    ACTIONS(13), 1,
      anon_sym_LBRACK,
    STATE(2), 1,
      sym__block_head,
    STATE(35), 1,
      sym__block_foot,
    STATE(48), 1,
      sym_parameter_name,
    ACTIONS(17), 2,
      anon_sym_LBRACK_RBRACK,
      anon_sym_LBRACK_DOT_DOT_SLASH_RBRACK,
    STATE(6), 4,
      sym__sub_definition,
      sym_parameter_definition,
      sym_block,
      aux_sym_top_block_repeat1,
  [87] = 8,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(9), 1,
      sym__path,
    ACTIONS(13), 1,
      anon_sym_LBRACK,
    STATE(2), 1,
      sym__block_head,
    STATE(37), 1,
      sym__block_foot,
    STATE(48), 1,
      sym_parameter_name,
    ACTIONS(19), 2,
      anon_sym_LBRACK_RBRACK,
      anon_sym_LBRACK_DOT_DOT_SLASH_RBRACK,
    STATE(4), 4,
      sym__sub_definition,
      sym_parameter_definition,
      sym_block,
      aux_sym_top_block_repeat1,
  [116] = 7,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(23), 1,
      anon_sym_LBRACK,
    ACTIONS(26), 1,
      sym__path,
    STATE(2), 1,
      sym__block_head,
    STATE(48), 1,
      sym_parameter_name,
    ACTIONS(21), 2,
      anon_sym_LBRACK_RBRACK,
      anon_sym_LBRACK_DOT_DOT_SLASH_RBRACK,
    STATE(6), 4,
      sym__sub_definition,
      sym_parameter_definition,
      sym_block,
      aux_sym_top_block_repeat1,
  [142] = 7,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(29), 1,
      ts_builtin_sym_end,
    ACTIONS(31), 1,
      anon_sym_LBRACK,
    ACTIONS(34), 1,
      sym__path,
    STATE(8), 1,
      sym__block_head,
    STATE(43), 1,
      sym_parameter_name,
    STATE(7), 4,
      sym__definition,
      sym_parameter_definition,
      sym_top_block,
      aux_sym_source_file_repeat1,
  [167] = 7,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(9), 1,
      sym__path,
    ACTIONS(13), 1,
      anon_sym_LBRACK,
    ACTIONS(37), 1,
      anon_sym_LBRACK_RBRACK,
    STATE(5), 1,
      sym__block_head,
    STATE(43), 1,
      sym_parameter_name,
    STATE(11), 4,
      sym__sub_definition,
      sym_parameter_definition,
      sym_block,
      aux_sym_top_block_repeat1,
  [192] = 7,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(7), 1,
      anon_sym_LBRACK,
    ACTIONS(9), 1,
      sym__path,
    ACTIONS(39), 1,
      ts_builtin_sym_end,
    STATE(8), 1,
      sym__block_head,
    STATE(43), 1,
      sym_parameter_name,
    STATE(7), 4,
      sym__definition,
      sym_parameter_definition,
      sym_top_block,
      aux_sym_source_file_repeat1,
  [217] = 7,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(21), 1,
      anon_sym_LBRACK_RBRACK,
    ACTIONS(23), 1,
      anon_sym_LBRACK,
    ACTIONS(26), 1,
      sym__path,
    STATE(5), 1,
      sym__block_head,
    STATE(43), 1,
      sym_parameter_name,
    STATE(10), 4,
      sym__sub_definition,
      sym_parameter_definition,
      sym_block,
      aux_sym_top_block_repeat1,
  [242] = 7,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(9), 1,
      sym__path,
    ACTIONS(13), 1,
      anon_sym_LBRACK,
    ACTIONS(41), 1,
      anon_sym_LBRACK_RBRACK,
    STATE(5), 1,
      sym__block_head,
    STATE(43), 1,
      sym_parameter_name,
    STATE(10), 4,
      sym__sub_definition,
      sym_parameter_definition,
      sym_block,
      aux_sym_top_block_repeat1,
  [267] = 6,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(43), 1,
      aux_sym__string_token1,
    ACTIONS(45), 1,
      anon_sym_SQUOTE,
    ACTIONS(47), 1,
      anon_sym_DQUOTE,
    STATE(14), 1,
      sym__string,
    STATE(34), 1,
      sym_parameter_value,
  [286] = 6,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(49), 1,
      aux_sym__string_token1,
    ACTIONS(51), 1,
      anon_sym_SQUOTE,
    ACTIONS(53), 1,
      anon_sym_DQUOTE,
    STATE(22), 1,
      sym_parameter_value,
    STATE(23), 1,
      sym__string,
  [305] = 3,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(57), 1,
      anon_sym_LBRACK,
    ACTIONS(55), 3,
      anon_sym_LBRACK_RBRACK,
      anon_sym_LBRACK_DOT_DOT_SLASH_RBRACK,
      sym__path,
  [317] = 3,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(61), 1,
      anon_sym_LBRACK,
    ACTIONS(59), 3,
      anon_sym_LBRACK_RBRACK,
      anon_sym_LBRACK_DOT_DOT_SLASH_RBRACK,
      sym__path,
  [329] = 5,
    ACTIONS(63), 1,
      anon_sym_DQUOTE,
    ACTIONS(65), 1,
      aux_sym__string_token3,
    ACTIONS(67), 1,
      sym_escape_sequence,
    ACTIONS(69), 1,
      sym__comment,
    STATE(30), 1,
      aux_sym__string_repeat2,
  [345] = 5,
    ACTIONS(63), 1,
      anon_sym_SQUOTE,
    ACTIONS(69), 1,
      sym__comment,
    ACTIONS(71), 1,
      aux_sym__string_token2,
    ACTIONS(73), 1,
      sym_escape_sequence,
    STATE(29), 1,
      aux_sym__string_repeat1,
  [361] = 5,
    ACTIONS(69), 1,
      sym__comment,
    ACTIONS(75), 1,
      anon_sym_DQUOTE,
    ACTIONS(77), 1,
      aux_sym__string_token3,
    ACTIONS(79), 1,
      sym_escape_sequence,
    STATE(16), 1,
      aux_sym__string_repeat2,
  [377] = 5,
    ACTIONS(69), 1,
      sym__comment,
    ACTIONS(75), 1,
      anon_sym_SQUOTE,
    ACTIONS(81), 1,
      aux_sym__string_token2,
    ACTIONS(83), 1,
      sym_escape_sequence,
    STATE(17), 1,
      aux_sym__string_repeat1,
  [393] = 5,
    ACTIONS(69), 1,
      sym__comment,
    ACTIONS(85), 1,
      anon_sym_SQUOTE,
    ACTIONS(87), 1,
      aux_sym__string_token2,
    ACTIONS(89), 1,
      sym_escape_sequence,
    STATE(26), 1,
      aux_sym__string_repeat1,
  [409] = 5,
    ACTIONS(69), 1,
      sym__comment,
    ACTIONS(85), 1,
      anon_sym_DQUOTE,
    ACTIONS(91), 1,
      aux_sym__string_token3,
    ACTIONS(93), 1,
      sym_escape_sequence,
    STATE(27), 1,
      aux_sym__string_repeat2,
  [425] = 3,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(97), 1,
      anon_sym_LBRACK,
    ACTIONS(95), 3,
      ts_builtin_sym_end,
      anon_sym_LBRACK_RBRACK,
      sym__path,
  [437] = 3,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(57), 1,
      anon_sym_LBRACK,
    ACTIONS(55), 3,
      ts_builtin_sym_end,
      anon_sym_LBRACK_RBRACK,
      sym__path,
  [449] = 3,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(101), 1,
      anon_sym_LBRACK,
    ACTIONS(99), 3,
      anon_sym_LBRACK_RBRACK,
      anon_sym_LBRACK_DOT_DOT_SLASH_RBRACK,
      sym__path,
  [461] = 3,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(105), 1,
      anon_sym_LBRACK,
    ACTIONS(103), 3,
      ts_builtin_sym_end,
      anon_sym_LBRACK_RBRACK,
      sym__path,
  [473] = 5,
    ACTIONS(69), 1,
      sym__comment,
    ACTIONS(71), 1,
      aux_sym__string_token2,
    ACTIONS(73), 1,
      sym_escape_sequence,
    ACTIONS(107), 1,
      anon_sym_SQUOTE,
    STATE(29), 1,
      aux_sym__string_repeat1,
  [489] = 5,
    ACTIONS(65), 1,
      aux_sym__string_token3,
    ACTIONS(67), 1,
      sym_escape_sequence,
    ACTIONS(69), 1,
      sym__comment,
    ACTIONS(107), 1,
      anon_sym_DQUOTE,
    STATE(30), 1,
      aux_sym__string_repeat2,
  [505] = 3,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(101), 1,
      anon_sym_LBRACK,
    ACTIONS(99), 3,
      ts_builtin_sym_end,
      anon_sym_LBRACK_RBRACK,
      sym__path,
  [517] = 5,
    ACTIONS(69), 1,
      sym__comment,
    ACTIONS(109), 1,
      anon_sym_SQUOTE,
    ACTIONS(111), 1,
      aux_sym__string_token2,
    ACTIONS(114), 1,
      sym_escape_sequence,
    STATE(29), 1,
      aux_sym__string_repeat1,
  [533] = 5,
    ACTIONS(69), 1,
      sym__comment,
    ACTIONS(117), 1,
      anon_sym_DQUOTE,
    ACTIONS(119), 1,
      aux_sym__string_token3,
    ACTIONS(122), 1,
      sym_escape_sequence,
    STATE(30), 1,
      aux_sym__string_repeat2,
  [549] = 3,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(105), 1,
      anon_sym_LBRACK,
    ACTIONS(103), 3,
      anon_sym_LBRACK_RBRACK,
      anon_sym_LBRACK_DOT_DOT_SLASH_RBRACK,
      sym__path,
  [561] = 3,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(127), 1,
      anon_sym_LBRACK,
    ACTIONS(125), 3,
      anon_sym_LBRACK_RBRACK,
      anon_sym_LBRACK_DOT_DOT_SLASH_RBRACK,
      sym__path,
  [573] = 3,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(131), 1,
      anon_sym_LBRACK,
    ACTIONS(129), 3,
      anon_sym_LBRACK_RBRACK,
      anon_sym_LBRACK_DOT_DOT_SLASH_RBRACK,
      sym__path,
  [585] = 3,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(97), 1,
      anon_sym_LBRACK,
    ACTIONS(95), 3,
      anon_sym_LBRACK_RBRACK,
      anon_sym_LBRACK_DOT_DOT_SLASH_RBRACK,
      sym__path,
  [597] = 3,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(131), 1,
      anon_sym_LBRACK,
    ACTIONS(129), 2,
      anon_sym_LBRACK_RBRACK,
      sym__path,
  [608] = 2,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(133), 3,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
      sym__path,
  [617] = 3,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(127), 1,
      anon_sym_LBRACK,
    ACTIONS(125), 2,
      anon_sym_LBRACK_RBRACK,
      sym__path,
  [628] = 3,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(61), 1,
      anon_sym_LBRACK,
    ACTIONS(59), 2,
      anon_sym_LBRACK_RBRACK,
      sym__path,
  [639] = 2,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(135), 3,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
      sym__path,
  [648] = 3,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(137), 1,
      sym__path,
    STATE(44), 1,
      sym_block_path,
  [658] = 3,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(137), 1,
      sym__path,
    STATE(45), 1,
      sym_block_path,
  [668] = 2,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(139), 1,
      anon_sym_RBRACK,
  [675] = 2,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(141), 1,
      anon_sym_EQ,
  [682] = 2,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(143), 1,
      anon_sym_RBRACK,
  [689] = 2,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(145), 1,
      anon_sym_RBRACK,
  [696] = 2,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(147), 1,
      ts_builtin_sym_end,
  [703] = 2,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(149), 1,
      anon_sym_EQ,
  [710] = 2,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(151), 1,
      anon_sym_EQ,
};

static uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 29,
  [SMALL_STATE(4)] = 58,
  [SMALL_STATE(5)] = 87,
  [SMALL_STATE(6)] = 116,
  [SMALL_STATE(7)] = 142,
  [SMALL_STATE(8)] = 167,
  [SMALL_STATE(9)] = 192,
  [SMALL_STATE(10)] = 217,
  [SMALL_STATE(11)] = 242,
  [SMALL_STATE(12)] = 267,
  [SMALL_STATE(13)] = 286,
  [SMALL_STATE(14)] = 305,
  [SMALL_STATE(15)] = 317,
  [SMALL_STATE(16)] = 329,
  [SMALL_STATE(17)] = 345,
  [SMALL_STATE(18)] = 361,
  [SMALL_STATE(19)] = 377,
  [SMALL_STATE(20)] = 393,
  [SMALL_STATE(21)] = 409,
  [SMALL_STATE(22)] = 425,
  [SMALL_STATE(23)] = 437,
  [SMALL_STATE(24)] = 449,
  [SMALL_STATE(25)] = 461,
  [SMALL_STATE(26)] = 473,
  [SMALL_STATE(27)] = 489,
  [SMALL_STATE(28)] = 505,
  [SMALL_STATE(29)] = 517,
  [SMALL_STATE(30)] = 533,
  [SMALL_STATE(31)] = 549,
  [SMALL_STATE(32)] = 561,
  [SMALL_STATE(33)] = 573,
  [SMALL_STATE(34)] = 585,
  [SMALL_STATE(35)] = 597,
  [SMALL_STATE(36)] = 608,
  [SMALL_STATE(37)] = 617,
  [SMALL_STATE(38)] = 628,
  [SMALL_STATE(39)] = 639,
  [SMALL_STATE(40)] = 648,
  [SMALL_STATE(41)] = 658,
  [SMALL_STATE(42)] = 668,
  [SMALL_STATE(43)] = 675,
  [SMALL_STATE(44)] = 682,
  [SMALL_STATE(45)] = 689,
  [SMALL_STATE(46)] = 696,
  [SMALL_STATE(47)] = 703,
  [SMALL_STATE(48)] = 710,
};

static TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(41),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [21] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_top_block_repeat1, 2),
  [23] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_top_block_repeat1, 2), SHIFT_REPEAT(41),
  [26] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_top_block_repeat1, 2), SHIFT_REPEAT(47),
  [29] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [31] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(40),
  [34] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(47),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [39] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [43] = {.entry = {.count = 1, .reusable = false}}, SHIFT(14),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [49] = {.entry = {.count = 1, .reusable = false}}, SHIFT(23),
  [51] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [53] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [55] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_value, 1),
  [57] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_parameter_value, 1),
  [59] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__block_head, 3),
  [61] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__block_head, 3),
  [63] = {.entry = {.count = 1, .reusable = false}}, SHIFT(24),
  [65] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [67] = {.entry = {.count = 1, .reusable = false}}, SHIFT(30),
  [69] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [71] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [73] = {.entry = {.count = 1, .reusable = false}}, SHIFT(29),
  [75] = {.entry = {.count = 1, .reusable = false}}, SHIFT(31),
  [77] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [79] = {.entry = {.count = 1, .reusable = false}}, SHIFT(16),
  [81] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [83] = {.entry = {.count = 1, .reusable = false}}, SHIFT(17),
  [85] = {.entry = {.count = 1, .reusable = false}}, SHIFT(25),
  [87] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [89] = {.entry = {.count = 1, .reusable = false}}, SHIFT(26),
  [91] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [93] = {.entry = {.count = 1, .reusable = false}}, SHIFT(27),
  [95] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_definition, 3),
  [97] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_parameter_definition, 3),
  [99] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__string, 3),
  [101] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__string, 3),
  [103] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__string, 2),
  [105] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__string, 2),
  [107] = {.entry = {.count = 1, .reusable = false}}, SHIFT(28),
  [109] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__string_repeat1, 2),
  [111] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__string_repeat1, 2), SHIFT_REPEAT(29),
  [114] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__string_repeat1, 2), SHIFT_REPEAT(29),
  [117] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__string_repeat2, 2),
  [119] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__string_repeat2, 2), SHIFT_REPEAT(30),
  [122] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__string_repeat2, 2), SHIFT_REPEAT(30),
  [125] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 2),
  [127] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 2),
  [129] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 3),
  [131] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 3),
  [133] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_top_block, 3),
  [135] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_top_block, 2),
  [137] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [139] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block_path, 1),
  [141] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [143] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [145] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [147] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [149] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_name, 1),
  [151] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_hit(void) {
  static TSLanguage language = {
    .version = LANGUAGE_VERSION,
    .symbol_count = SYMBOL_COUNT,
    .alias_count = ALIAS_COUNT,
    .token_count = TOKEN_COUNT,
    .large_state_count = LARGE_STATE_COUNT,
    .symbol_metadata = ts_symbol_metadata,
    .parse_table = (const unsigned short *)ts_parse_table,
    .small_parse_table = (const uint16_t *)ts_small_parse_table,
    .small_parse_table_map = (const uint32_t *)ts_small_parse_table_map,
    .parse_actions = ts_parse_actions,
    .lex_modes = ts_lex_modes,
    .symbol_names = ts_symbol_names,
    .public_symbol_map = ts_symbol_map,
    .alias_sequences = (const TSSymbol *)ts_alias_sequences,
    .field_count = FIELD_COUNT,
    .max_alias_sequence_length = MAX_ALIAS_SEQUENCE_LENGTH,
    .lex_fn = ts_lex,
    .external_token_count = EXTERNAL_TOKEN_COUNT,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
