#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 55
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 33
#define ALIAS_COUNT 0
#define TOKEN_COUNT 15
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 3
#define PRODUCTION_ID_COUNT 1

enum {
  anon_sym_BANGinclude = 1,
  anon_sym_EQ = 2,
  anon_sym_LBRACK_RBRACK = 3,
  anon_sym_LBRACK = 4,
  anon_sym_RBRACK = 5,
  anon_sym_LBRACK_DOT_DOT_SLASH_RBRACK = 6,
  aux_sym__string_token1 = 7,
  anon_sym_SQUOTE = 8,
  aux_sym__string_token2 = 9,
  anon_sym_DQUOTE = 10,
  aux_sym__string_token3 = 11,
  sym_escape_sequence = 12,
  sym__path = 13,
  sym__comment = 14,
  sym_source_file = 15,
  sym__definition = 16,
  sym__sub_definition = 17,
  sym_include_directive = 18,
  sym_parameter_definition = 19,
  sym_top_block = 20,
  sym_block = 21,
  sym__block_head = 22,
  sym__block_foot = 23,
  sym_block_path = 24,
  sym_parameter_name = 25,
  sym_parameter_value = 26,
  sym_include_path = 27,
  sym__string = 28,
  aux_sym_source_file_repeat1 = 29,
  aux_sym_top_block_repeat1 = 30,
  aux_sym__string_repeat1 = 31,
  aux_sym__string_repeat2 = 32,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_BANGinclude] = "!include",
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
  [sym_include_directive] = "include_directive",
  [sym_parameter_definition] = "parameter_definition",
  [sym_top_block] = "top_block",
  [sym_block] = "block",
  [sym__block_head] = "_block_head",
  [sym__block_foot] = "_block_foot",
  [sym_block_path] = "block_path",
  [sym_parameter_name] = "parameter_name",
  [sym_parameter_value] = "parameter_value",
  [sym_include_path] = "include_path",
  [sym__string] = "_string",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_top_block_repeat1] = "top_block_repeat1",
  [aux_sym__string_repeat1] = "_string_repeat1",
  [aux_sym__string_repeat2] = "_string_repeat2",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_BANGinclude] = anon_sym_BANGinclude,
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
  [sym_include_directive] = sym_include_directive,
  [sym_parameter_definition] = sym_parameter_definition,
  [sym_top_block] = sym_top_block,
  [sym_block] = sym_block,
  [sym__block_head] = sym__block_head,
  [sym__block_foot] = sym__block_foot,
  [sym_block_path] = sym_block_path,
  [sym_parameter_name] = sym_parameter_name,
  [sym_parameter_value] = sym_parameter_value,
  [sym_include_path] = sym_include_path,
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
  [anon_sym_BANGinclude] = {
    .visible = true,
    .named = false,
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
  [sym_include_directive] = {
    .visible = true,
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
  [sym_include_path] = {
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

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
};

static const uint16_t ts_non_terminal_alias_map[] = {
  0,
};

static const TSStateId ts_primary_state_ids[STATE_COUNT] = {
  [0] = 0,
  [1] = 1,
  [2] = 2,
  [3] = 2,
  [4] = 4,
  [5] = 4,
  [6] = 6,
  [7] = 7,
  [8] = 6,
  [9] = 9,
  [10] = 10,
  [11] = 11,
  [12] = 12,
  [13] = 13,
  [14] = 14,
  [15] = 13,
  [16] = 16,
  [17] = 17,
  [18] = 18,
  [19] = 19,
  [20] = 20,
  [21] = 21,
  [22] = 22,
  [23] = 23,
  [24] = 21,
  [25] = 20,
  [26] = 16,
  [27] = 14,
  [28] = 22,
  [29] = 19,
  [30] = 18,
  [31] = 31,
  [32] = 32,
  [33] = 17,
  [34] = 34,
  [35] = 35,
  [36] = 36,
  [37] = 23,
  [38] = 31,
  [39] = 12,
  [40] = 40,
  [41] = 35,
  [42] = 42,
  [43] = 40,
  [44] = 44,
  [45] = 32,
  [46] = 46,
  [47] = 46,
  [48] = 48,
  [49] = 49,
  [50] = 50,
  [51] = 51,
  [52] = 50,
  [53] = 53,
  [54] = 49,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(23);
      if (lookahead == '!') ADVANCE(10);
      if (lookahead == '"') ADVANCE(45);
      if (lookahead == '#') ADVANCE(63);
      if (lookahead == '\'') ADVANCE(32);
      if (lookahead == '=') ADVANCE(25);
      if (lookahead == '[') ADVANCE(27);
      if (lookahead == '\\') ADVANCE(13);
      if (lookahead == ']') ADVANCE(29);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(21)
      if (lookahead == '+' ||
          ('-' <= lookahead && lookahead <= ':') ||
          ('<' <= lookahead && lookahead <= '>') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(61);
      END_STATE();
    case 1:
      if (lookahead == '"') ADVANCE(45);
      if (lookahead == '#') ADVANCE(62);
      if (lookahead == '\'') ADVANCE(32);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(1)
      if (lookahead != 0 &&
          lookahead != '[') ADVANCE(31);
      END_STATE();
    case 2:
      if (lookahead == '"') ADVANCE(45);
      if (lookahead == '#') ADVANCE(46);
      if (lookahead == '\\') ADVANCE(48);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(47);
      if (lookahead != 0) ADVANCE(57);
      END_STATE();
    case 3:
      if (lookahead == '#') ADVANCE(33);
      if (lookahead == '\'') ADVANCE(32);
      if (lookahead == '\\') ADVANCE(35);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(34);
      if (lookahead != 0) ADVANCE(44);
      END_STATE();
    case 4:
      if (lookahead == '.') ADVANCE(5);
      END_STATE();
    case 5:
      if (lookahead == '/') ADVANCE(6);
      END_STATE();
    case 6:
      if (lookahead == ']') ADVANCE(30);
      END_STATE();
    case 7:
      if (lookahead == 'c') ADVANCE(11);
      END_STATE();
    case 8:
      if (lookahead == 'd') ADVANCE(9);
      END_STATE();
    case 9:
      if (lookahead == 'e') ADVANCE(24);
      END_STATE();
    case 10:
      if (lookahead == 'i') ADVANCE(12);
      END_STATE();
    case 11:
      if (lookahead == 'l') ADVANCE(14);
      END_STATE();
    case 12:
      if (lookahead == 'n') ADVANCE(7);
      END_STATE();
    case 13:
      if (lookahead == 'u') ADVANCE(15);
      if (lookahead == 'x') ADVANCE(20);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(60);
      if (lookahead != 0) ADVANCE(58);
      END_STATE();
    case 14:
      if (lookahead == 'u') ADVANCE(8);
      END_STATE();
    case 15:
      if (lookahead == '{') ADVANCE(19);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(17);
      END_STATE();
    case 16:
      if (lookahead == '}') ADVANCE(58);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(16);
      END_STATE();
    case 17:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(20);
      END_STATE();
    case 18:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(58);
      END_STATE();
    case 19:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(16);
      END_STATE();
    case 20:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(18);
      END_STATE();
    case 21:
      if (eof) ADVANCE(23);
      if (lookahead == '!') ADVANCE(10);
      if (lookahead == '"') ADVANCE(45);
      if (lookahead == '#') ADVANCE(63);
      if (lookahead == '\'') ADVANCE(32);
      if (lookahead == '=') ADVANCE(25);
      if (lookahead == '[') ADVANCE(27);
      if (lookahead == ']') ADVANCE(29);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(21)
      if (lookahead == '+' ||
          ('-' <= lookahead && lookahead <= ':') ||
          ('<' <= lookahead && lookahead <= '>') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(61);
      END_STATE();
    case 22:
      if (eof) ADVANCE(23);
      if (lookahead == '!') ADVANCE(10);
      if (lookahead == '#') ADVANCE(63);
      if (lookahead == '[') ADVANCE(28);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(22)
      if (lookahead == '+' ||
          ('-' <= lookahead && lookahead <= ':') ||
          lookahead == '<' ||
          lookahead == '>' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(61);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(anon_sym_BANGinclude);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(anon_sym_LBRACK_RBRACK);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      if (lookahead == '.') ADVANCE(4);
      if (lookahead == ']') ADVANCE(26);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      if (lookahead == ']') ADVANCE(26);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(anon_sym_LBRACK_DOT_DOT_SLASH_RBRACK);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(aux_sym__string_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '[') ADVANCE(31);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(aux_sym__string_token2);
      if (lookahead == '\n') ADVANCE(44);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(33);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(aux_sym__string_token2);
      if (lookahead == '#') ADVANCE(33);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(34);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(44);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(aux_sym__string_token2);
      if (lookahead == 'u') ADVANCE(36);
      if (lookahead == 'x') ADVANCE(43);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(39);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(44);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(aux_sym__string_token2);
      if (lookahead == '{') ADVANCE(42);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(41);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(44);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(aux_sym__string_token2);
      if (lookahead == '}') ADVANCE(44);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(37);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(44);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(aux_sym__string_token2);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(44);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(44);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(aux_sym__string_token2);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(38);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(44);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(aux_sym__string_token2);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(44);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(44);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(aux_sym__string_token2);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(43);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(44);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(aux_sym__string_token2);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(37);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(44);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(aux_sym__string_token2);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(40);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(44);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(aux_sym__string_token2);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(44);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(aux_sym__string_token3);
      if (lookahead == '\n') ADVANCE(57);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(46);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(aux_sym__string_token3);
      if (lookahead == '#') ADVANCE(46);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(47);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(57);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(aux_sym__string_token3);
      if (lookahead == 'u') ADVANCE(49);
      if (lookahead == 'x') ADVANCE(56);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(52);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(57);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(aux_sym__string_token3);
      if (lookahead == '{') ADVANCE(55);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(54);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(57);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(aux_sym__string_token3);
      if (lookahead == '}') ADVANCE(57);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(50);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(57);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(aux_sym__string_token3);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(57);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(57);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(aux_sym__string_token3);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(51);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(57);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(aux_sym__string_token3);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(57);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(57);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(aux_sym__string_token3);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(56);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(57);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(aux_sym__string_token3);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(50);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(57);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(aux_sym__string_token3);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(53);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(57);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(aux_sym__string_token3);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(57);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(sym_escape_sequence);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(sym_escape_sequence);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(58);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(sym_escape_sequence);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(59);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(sym__path);
      if (lookahead == '+' ||
          ('-' <= lookahead && lookahead <= ':') ||
          lookahead == '<' ||
          lookahead == '>' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(61);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(sym__comment);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == '"' ||
          lookahead == '\'' ||
          lookahead == '[') ADVANCE(63);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(62);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(sym__comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(63);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 22},
  [2] = {.lex_state = 0},
  [3] = {.lex_state = 0},
  [4] = {.lex_state = 0},
  [5] = {.lex_state = 0},
  [6] = {.lex_state = 0},
  [7] = {.lex_state = 22},
  [8] = {.lex_state = 22},
  [9] = {.lex_state = 22},
  [10] = {.lex_state = 22},
  [11] = {.lex_state = 22},
  [12] = {.lex_state = 0},
  [13] = {.lex_state = 0},
  [14] = {.lex_state = 1},
  [15] = {.lex_state = 22},
  [16] = {.lex_state = 22},
  [17] = {.lex_state = 0},
  [18] = {.lex_state = 0},
  [19] = {.lex_state = 0},
  [20] = {.lex_state = 1},
  [21] = {.lex_state = 22},
  [22] = {.lex_state = 0},
  [23] = {.lex_state = 0},
  [24] = {.lex_state = 0},
  [25] = {.lex_state = 1},
  [26] = {.lex_state = 0},
  [27] = {.lex_state = 1},
  [28] = {.lex_state = 22},
  [29] = {.lex_state = 22},
  [30] = {.lex_state = 22},
  [31] = {.lex_state = 2},
  [32] = {.lex_state = 3},
  [33] = {.lex_state = 22},
  [34] = {.lex_state = 3},
  [35] = {.lex_state = 2},
  [36] = {.lex_state = 22},
  [37] = {.lex_state = 22},
  [38] = {.lex_state = 2},
  [39] = {.lex_state = 22},
  [40] = {.lex_state = 3},
  [41] = {.lex_state = 2},
  [42] = {.lex_state = 2},
  [43] = {.lex_state = 3},
  [44] = {.lex_state = 22},
  [45] = {.lex_state = 3},
  [46] = {.lex_state = 0},
  [47] = {.lex_state = 0},
  [48] = {.lex_state = 0},
  [49] = {.lex_state = 0},
  [50] = {.lex_state = 0},
  [51] = {.lex_state = 0},
  [52] = {.lex_state = 0},
  [53] = {.lex_state = 0},
  [54] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_BANGinclude] = ACTIONS(1),
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
    [sym_source_file] = STATE(53),
    [sym__definition] = STATE(9),
    [sym_include_directive] = STATE(9),
    [sym_parameter_definition] = STATE(9),
    [sym_top_block] = STATE(9),
    [sym__block_head] = STATE(7),
    [sym_parameter_name] = STATE(54),
    [aux_sym_source_file_repeat1] = STATE(9),
    [ts_builtin_sym_end] = ACTIONS(5),
    [anon_sym_BANGinclude] = ACTIONS(7),
    [anon_sym_LBRACK] = ACTIONS(9),
    [sym__path] = ACTIONS(11),
    [sym__comment] = ACTIONS(3),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 9,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(11), 1,
      sym__path,
    ACTIONS(13), 1,
      anon_sym_BANGinclude,
    ACTIONS(17), 1,
      anon_sym_LBRACK,
    STATE(3), 1,
      sym__block_head,
    STATE(37), 1,
      sym__block_foot,
    STATE(49), 1,
      sym_parameter_name,
    ACTIONS(15), 2,
      anon_sym_LBRACK_RBRACK,
      anon_sym_LBRACK_DOT_DOT_SLASH_RBRACK,
    STATE(5), 5,
      sym__sub_definition,
      sym_include_directive,
      sym_parameter_definition,
      sym_block,
      aux_sym_top_block_repeat1,
  [33] = 9,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(11), 1,
      sym__path,
    ACTIONS(13), 1,
      anon_sym_BANGinclude,
    ACTIONS(17), 1,
      anon_sym_LBRACK,
    STATE(3), 1,
      sym__block_head,
    STATE(23), 1,
      sym__block_foot,
    STATE(49), 1,
      sym_parameter_name,
    ACTIONS(19), 2,
      anon_sym_LBRACK_RBRACK,
      anon_sym_LBRACK_DOT_DOT_SLASH_RBRACK,
    STATE(4), 5,
      sym__sub_definition,
      sym_include_directive,
      sym_parameter_definition,
      sym_block,
      aux_sym_top_block_repeat1,
  [66] = 9,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(11), 1,
      sym__path,
    ACTIONS(13), 1,
      anon_sym_BANGinclude,
    ACTIONS(17), 1,
      anon_sym_LBRACK,
    STATE(3), 1,
      sym__block_head,
    STATE(17), 1,
      sym__block_foot,
    STATE(49), 1,
      sym_parameter_name,
    ACTIONS(21), 2,
      anon_sym_LBRACK_RBRACK,
      anon_sym_LBRACK_DOT_DOT_SLASH_RBRACK,
    STATE(6), 5,
      sym__sub_definition,
      sym_include_directive,
      sym_parameter_definition,
      sym_block,
      aux_sym_top_block_repeat1,
  [99] = 9,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(11), 1,
      sym__path,
    ACTIONS(13), 1,
      anon_sym_BANGinclude,
    ACTIONS(17), 1,
      anon_sym_LBRACK,
    STATE(3), 1,
      sym__block_head,
    STATE(33), 1,
      sym__block_foot,
    STATE(49), 1,
      sym_parameter_name,
    ACTIONS(23), 2,
      anon_sym_LBRACK_RBRACK,
      anon_sym_LBRACK_DOT_DOT_SLASH_RBRACK,
    STATE(6), 5,
      sym__sub_definition,
      sym_include_directive,
      sym_parameter_definition,
      sym_block,
      aux_sym_top_block_repeat1,
  [132] = 8,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(25), 1,
      anon_sym_BANGinclude,
    ACTIONS(30), 1,
      anon_sym_LBRACK,
    ACTIONS(33), 1,
      sym__path,
    STATE(3), 1,
      sym__block_head,
    STATE(49), 1,
      sym_parameter_name,
    ACTIONS(28), 2,
      anon_sym_LBRACK_RBRACK,
      anon_sym_LBRACK_DOT_DOT_SLASH_RBRACK,
    STATE(6), 5,
      sym__sub_definition,
      sym_include_directive,
      sym_parameter_definition,
      sym_block,
      aux_sym_top_block_repeat1,
  [162] = 8,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(7), 1,
      anon_sym_BANGinclude,
    ACTIONS(11), 1,
      sym__path,
    ACTIONS(17), 1,
      anon_sym_LBRACK,
    ACTIONS(36), 1,
      anon_sym_LBRACK_RBRACK,
    STATE(2), 1,
      sym__block_head,
    STATE(54), 1,
      sym_parameter_name,
    STATE(10), 5,
      sym__sub_definition,
      sym_include_directive,
      sym_parameter_definition,
      sym_block,
      aux_sym_top_block_repeat1,
  [191] = 8,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(28), 1,
      anon_sym_LBRACK_RBRACK,
    ACTIONS(30), 1,
      anon_sym_LBRACK,
    ACTIONS(33), 1,
      sym__path,
    ACTIONS(38), 1,
      anon_sym_BANGinclude,
    STATE(2), 1,
      sym__block_head,
    STATE(54), 1,
      sym_parameter_name,
    STATE(8), 5,
      sym__sub_definition,
      sym_include_directive,
      sym_parameter_definition,
      sym_block,
      aux_sym_top_block_repeat1,
  [220] = 8,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(7), 1,
      anon_sym_BANGinclude,
    ACTIONS(9), 1,
      anon_sym_LBRACK,
    ACTIONS(11), 1,
      sym__path,
    ACTIONS(41), 1,
      ts_builtin_sym_end,
    STATE(7), 1,
      sym__block_head,
    STATE(54), 1,
      sym_parameter_name,
    STATE(11), 5,
      sym__definition,
      sym_include_directive,
      sym_parameter_definition,
      sym_top_block,
      aux_sym_source_file_repeat1,
  [249] = 8,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(7), 1,
      anon_sym_BANGinclude,
    ACTIONS(11), 1,
      sym__path,
    ACTIONS(17), 1,
      anon_sym_LBRACK,
    ACTIONS(43), 1,
      anon_sym_LBRACK_RBRACK,
    STATE(2), 1,
      sym__block_head,
    STATE(54), 1,
      sym_parameter_name,
    STATE(8), 5,
      sym__sub_definition,
      sym_include_directive,
      sym_parameter_definition,
      sym_block,
      aux_sym_top_block_repeat1,
  [278] = 8,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(45), 1,
      ts_builtin_sym_end,
    ACTIONS(47), 1,
      anon_sym_BANGinclude,
    ACTIONS(50), 1,
      anon_sym_LBRACK,
    ACTIONS(53), 1,
      sym__path,
    STATE(7), 1,
      sym__block_head,
    STATE(54), 1,
      sym_parameter_name,
    STATE(11), 5,
      sym__definition,
      sym_include_directive,
      sym_parameter_definition,
      sym_top_block,
      aux_sym_source_file_repeat1,
  [307] = 3,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(58), 1,
      anon_sym_LBRACK,
    ACTIONS(56), 4,
      anon_sym_BANGinclude,
      anon_sym_LBRACK_RBRACK,
      anon_sym_LBRACK_DOT_DOT_SLASH_RBRACK,
      sym__path,
  [320] = 3,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(62), 1,
      anon_sym_LBRACK,
    ACTIONS(60), 4,
      anon_sym_BANGinclude,
      anon_sym_LBRACK_RBRACK,
      anon_sym_LBRACK_DOT_DOT_SLASH_RBRACK,
      sym__path,
  [333] = 6,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(64), 1,
      aux_sym__string_token1,
    ACTIONS(66), 1,
      anon_sym_SQUOTE,
    ACTIONS(68), 1,
      anon_sym_DQUOTE,
    STATE(13), 1,
      sym_include_path,
    STATE(26), 1,
      sym__string,
  [352] = 3,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(62), 1,
      anon_sym_LBRACK,
    ACTIONS(60), 4,
      ts_builtin_sym_end,
      anon_sym_BANGinclude,
      anon_sym_LBRACK_RBRACK,
      sym__path,
  [365] = 3,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(72), 1,
      anon_sym_LBRACK,
    ACTIONS(70), 4,
      ts_builtin_sym_end,
      anon_sym_BANGinclude,
      anon_sym_LBRACK_RBRACK,
      sym__path,
  [378] = 3,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(76), 1,
      anon_sym_LBRACK,
    ACTIONS(74), 4,
      anon_sym_BANGinclude,
      anon_sym_LBRACK_RBRACK,
      anon_sym_LBRACK_DOT_DOT_SLASH_RBRACK,
      sym__path,
  [391] = 3,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(80), 1,
      anon_sym_LBRACK,
    ACTIONS(78), 4,
      anon_sym_BANGinclude,
      anon_sym_LBRACK_RBRACK,
      anon_sym_LBRACK_DOT_DOT_SLASH_RBRACK,
      sym__path,
  [404] = 3,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(84), 1,
      anon_sym_LBRACK,
    ACTIONS(82), 4,
      anon_sym_BANGinclude,
      anon_sym_LBRACK_RBRACK,
      anon_sym_LBRACK_DOT_DOT_SLASH_RBRACK,
      sym__path,
  [417] = 6,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(86), 1,
      aux_sym__string_token1,
    ACTIONS(88), 1,
      anon_sym_SQUOTE,
    ACTIONS(90), 1,
      anon_sym_DQUOTE,
    STATE(28), 1,
      sym_parameter_value,
    STATE(29), 1,
      sym__string,
  [436] = 3,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(94), 1,
      anon_sym_LBRACK,
    ACTIONS(92), 4,
      ts_builtin_sym_end,
      anon_sym_BANGinclude,
      anon_sym_LBRACK_RBRACK,
      sym__path,
  [449] = 3,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(98), 1,
      anon_sym_LBRACK,
    ACTIONS(96), 4,
      anon_sym_BANGinclude,
      anon_sym_LBRACK_RBRACK,
      anon_sym_LBRACK_DOT_DOT_SLASH_RBRACK,
      sym__path,
  [462] = 3,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(102), 1,
      anon_sym_LBRACK,
    ACTIONS(100), 4,
      anon_sym_BANGinclude,
      anon_sym_LBRACK_RBRACK,
      anon_sym_LBRACK_DOT_DOT_SLASH_RBRACK,
      sym__path,
  [475] = 3,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(94), 1,
      anon_sym_LBRACK,
    ACTIONS(92), 4,
      anon_sym_BANGinclude,
      anon_sym_LBRACK_RBRACK,
      anon_sym_LBRACK_DOT_DOT_SLASH_RBRACK,
      sym__path,
  [488] = 6,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(66), 1,
      anon_sym_SQUOTE,
    ACTIONS(68), 1,
      anon_sym_DQUOTE,
    ACTIONS(104), 1,
      aux_sym__string_token1,
    STATE(19), 1,
      sym__string,
    STATE(22), 1,
      sym_parameter_value,
  [507] = 3,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(72), 1,
      anon_sym_LBRACK,
    ACTIONS(70), 4,
      anon_sym_BANGinclude,
      anon_sym_LBRACK_RBRACK,
      anon_sym_LBRACK_DOT_DOT_SLASH_RBRACK,
      sym__path,
  [520] = 6,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(88), 1,
      anon_sym_SQUOTE,
    ACTIONS(90), 1,
      anon_sym_DQUOTE,
    ACTIONS(106), 1,
      aux_sym__string_token1,
    STATE(15), 1,
      sym_include_path,
    STATE(16), 1,
      sym__string,
  [539] = 3,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(98), 1,
      anon_sym_LBRACK,
    ACTIONS(96), 4,
      ts_builtin_sym_end,
      anon_sym_BANGinclude,
      anon_sym_LBRACK_RBRACK,
      sym__path,
  [552] = 3,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(84), 1,
      anon_sym_LBRACK,
    ACTIONS(82), 4,
      ts_builtin_sym_end,
      anon_sym_BANGinclude,
      anon_sym_LBRACK_RBRACK,
      sym__path,
  [565] = 3,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(80), 1,
      anon_sym_LBRACK,
    ACTIONS(78), 4,
      ts_builtin_sym_end,
      anon_sym_BANGinclude,
      anon_sym_LBRACK_RBRACK,
      sym__path,
  [578] = 5,
    ACTIONS(108), 1,
      anon_sym_DQUOTE,
    ACTIONS(110), 1,
      aux_sym__string_token3,
    ACTIONS(112), 1,
      sym_escape_sequence,
    ACTIONS(114), 1,
      sym__comment,
    STATE(42), 1,
      aux_sym__string_repeat2,
  [594] = 5,
    ACTIONS(114), 1,
      sym__comment,
    ACTIONS(116), 1,
      anon_sym_SQUOTE,
    ACTIONS(118), 1,
      aux_sym__string_token2,
    ACTIONS(120), 1,
      sym_escape_sequence,
    STATE(43), 1,
      aux_sym__string_repeat1,
  [610] = 3,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(76), 1,
      anon_sym_LBRACK,
    ACTIONS(74), 3,
      anon_sym_BANGinclude,
      anon_sym_LBRACK_RBRACK,
      sym__path,
  [622] = 5,
    ACTIONS(114), 1,
      sym__comment,
    ACTIONS(122), 1,
      anon_sym_SQUOTE,
    ACTIONS(124), 1,
      aux_sym__string_token2,
    ACTIONS(127), 1,
      sym_escape_sequence,
    STATE(34), 1,
      aux_sym__string_repeat1,
  [638] = 5,
    ACTIONS(114), 1,
      sym__comment,
    ACTIONS(116), 1,
      anon_sym_DQUOTE,
    ACTIONS(130), 1,
      aux_sym__string_token3,
    ACTIONS(132), 1,
      sym_escape_sequence,
    STATE(31), 1,
      aux_sym__string_repeat2,
  [654] = 2,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(134), 4,
      ts_builtin_sym_end,
      anon_sym_BANGinclude,
      anon_sym_LBRACK,
      sym__path,
  [664] = 3,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(102), 1,
      anon_sym_LBRACK,
    ACTIONS(100), 3,
      anon_sym_BANGinclude,
      anon_sym_LBRACK_RBRACK,
      sym__path,
  [676] = 5,
    ACTIONS(110), 1,
      aux_sym__string_token3,
    ACTIONS(112), 1,
      sym_escape_sequence,
    ACTIONS(114), 1,
      sym__comment,
    ACTIONS(136), 1,
      anon_sym_DQUOTE,
    STATE(42), 1,
      aux_sym__string_repeat2,
  [692] = 3,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(58), 1,
      anon_sym_LBRACK,
    ACTIONS(56), 3,
      anon_sym_BANGinclude,
      anon_sym_LBRACK_RBRACK,
      sym__path,
  [704] = 5,
    ACTIONS(114), 1,
      sym__comment,
    ACTIONS(136), 1,
      anon_sym_SQUOTE,
    ACTIONS(138), 1,
      aux_sym__string_token2,
    ACTIONS(140), 1,
      sym_escape_sequence,
    STATE(34), 1,
      aux_sym__string_repeat1,
  [720] = 5,
    ACTIONS(114), 1,
      sym__comment,
    ACTIONS(142), 1,
      anon_sym_DQUOTE,
    ACTIONS(144), 1,
      aux_sym__string_token3,
    ACTIONS(146), 1,
      sym_escape_sequence,
    STATE(38), 1,
      aux_sym__string_repeat2,
  [736] = 5,
    ACTIONS(114), 1,
      sym__comment,
    ACTIONS(148), 1,
      anon_sym_DQUOTE,
    ACTIONS(150), 1,
      aux_sym__string_token3,
    ACTIONS(153), 1,
      sym_escape_sequence,
    STATE(42), 1,
      aux_sym__string_repeat2,
  [752] = 5,
    ACTIONS(108), 1,
      anon_sym_SQUOTE,
    ACTIONS(114), 1,
      sym__comment,
    ACTIONS(138), 1,
      aux_sym__string_token2,
    ACTIONS(140), 1,
      sym_escape_sequence,
    STATE(34), 1,
      aux_sym__string_repeat1,
  [768] = 2,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(156), 4,
      ts_builtin_sym_end,
      anon_sym_BANGinclude,
      anon_sym_LBRACK,
      sym__path,
  [778] = 5,
    ACTIONS(114), 1,
      sym__comment,
    ACTIONS(142), 1,
      anon_sym_SQUOTE,
    ACTIONS(158), 1,
      aux_sym__string_token2,
    ACTIONS(160), 1,
      sym_escape_sequence,
    STATE(40), 1,
      aux_sym__string_repeat1,
  [794] = 3,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(162), 1,
      sym__path,
    STATE(50), 1,
      sym_block_path,
  [804] = 3,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(162), 1,
      sym__path,
    STATE(52), 1,
      sym_block_path,
  [814] = 2,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(164), 1,
      anon_sym_RBRACK,
  [821] = 2,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(166), 1,
      anon_sym_EQ,
  [828] = 2,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(168), 1,
      anon_sym_RBRACK,
  [835] = 2,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(170), 1,
      anon_sym_EQ,
  [842] = 2,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(172), 1,
      anon_sym_RBRACK,
  [849] = 2,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(174), 1,
      ts_builtin_sym_end,
  [856] = 2,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(176), 1,
      anon_sym_EQ,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 33,
  [SMALL_STATE(4)] = 66,
  [SMALL_STATE(5)] = 99,
  [SMALL_STATE(6)] = 132,
  [SMALL_STATE(7)] = 162,
  [SMALL_STATE(8)] = 191,
  [SMALL_STATE(9)] = 220,
  [SMALL_STATE(10)] = 249,
  [SMALL_STATE(11)] = 278,
  [SMALL_STATE(12)] = 307,
  [SMALL_STATE(13)] = 320,
  [SMALL_STATE(14)] = 333,
  [SMALL_STATE(15)] = 352,
  [SMALL_STATE(16)] = 365,
  [SMALL_STATE(17)] = 378,
  [SMALL_STATE(18)] = 391,
  [SMALL_STATE(19)] = 404,
  [SMALL_STATE(20)] = 417,
  [SMALL_STATE(21)] = 436,
  [SMALL_STATE(22)] = 449,
  [SMALL_STATE(23)] = 462,
  [SMALL_STATE(24)] = 475,
  [SMALL_STATE(25)] = 488,
  [SMALL_STATE(26)] = 507,
  [SMALL_STATE(27)] = 520,
  [SMALL_STATE(28)] = 539,
  [SMALL_STATE(29)] = 552,
  [SMALL_STATE(30)] = 565,
  [SMALL_STATE(31)] = 578,
  [SMALL_STATE(32)] = 594,
  [SMALL_STATE(33)] = 610,
  [SMALL_STATE(34)] = 622,
  [SMALL_STATE(35)] = 638,
  [SMALL_STATE(36)] = 654,
  [SMALL_STATE(37)] = 664,
  [SMALL_STATE(38)] = 676,
  [SMALL_STATE(39)] = 692,
  [SMALL_STATE(40)] = 704,
  [SMALL_STATE(41)] = 720,
  [SMALL_STATE(42)] = 736,
  [SMALL_STATE(43)] = 752,
  [SMALL_STATE(44)] = 768,
  [SMALL_STATE(45)] = 778,
  [SMALL_STATE(46)] = 794,
  [SMALL_STATE(47)] = 804,
  [SMALL_STATE(48)] = 814,
  [SMALL_STATE(49)] = 821,
  [SMALL_STATE(50)] = 828,
  [SMALL_STATE(51)] = 835,
  [SMALL_STATE(52)] = 842,
  [SMALL_STATE(53)] = 849,
  [SMALL_STATE(54)] = 856,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(47),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [25] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_top_block_repeat1, 2), SHIFT_REPEAT(14),
  [28] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_top_block_repeat1, 2),
  [30] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_top_block_repeat1, 2), SHIFT_REPEAT(47),
  [33] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_top_block_repeat1, 2), SHIFT_REPEAT(51),
  [36] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [38] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_top_block_repeat1, 2), SHIFT_REPEAT(27),
  [41] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [45] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [47] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(27),
  [50] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(46),
  [53] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(51),
  [56] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__block_head, 3),
  [58] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__block_head, 3),
  [60] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_include_directive, 2),
  [62] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_include_directive, 2),
  [64] = {.entry = {.count = 1, .reusable = false}}, SHIFT(26),
  [66] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [68] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [70] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_include_path, 1),
  [72] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_include_path, 1),
  [74] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 3),
  [76] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 3),
  [78] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__string, 3),
  [80] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__string, 3),
  [82] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_value, 1),
  [84] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_parameter_value, 1),
  [86] = {.entry = {.count = 1, .reusable = false}}, SHIFT(29),
  [88] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [90] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [92] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__string, 2),
  [94] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__string, 2),
  [96] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_definition, 3),
  [98] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_parameter_definition, 3),
  [100] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 2),
  [102] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 2),
  [104] = {.entry = {.count = 1, .reusable = false}}, SHIFT(19),
  [106] = {.entry = {.count = 1, .reusable = false}}, SHIFT(16),
  [108] = {.entry = {.count = 1, .reusable = false}}, SHIFT(30),
  [110] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [112] = {.entry = {.count = 1, .reusable = false}}, SHIFT(42),
  [114] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [116] = {.entry = {.count = 1, .reusable = false}}, SHIFT(21),
  [118] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [120] = {.entry = {.count = 1, .reusable = false}}, SHIFT(43),
  [122] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__string_repeat1, 2),
  [124] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__string_repeat1, 2), SHIFT_REPEAT(34),
  [127] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__string_repeat1, 2), SHIFT_REPEAT(34),
  [130] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [132] = {.entry = {.count = 1, .reusable = false}}, SHIFT(31),
  [134] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_top_block, 3),
  [136] = {.entry = {.count = 1, .reusable = false}}, SHIFT(18),
  [138] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [140] = {.entry = {.count = 1, .reusable = false}}, SHIFT(34),
  [142] = {.entry = {.count = 1, .reusable = false}}, SHIFT(24),
  [144] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [146] = {.entry = {.count = 1, .reusable = false}}, SHIFT(38),
  [148] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__string_repeat2, 2),
  [150] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__string_repeat2, 2), SHIFT_REPEAT(42),
  [153] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__string_repeat2, 2), SHIFT_REPEAT(42),
  [156] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_top_block, 2),
  [158] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [160] = {.entry = {.count = 1, .reusable = false}}, SHIFT(40),
  [162] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [164] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block_path, 1),
  [166] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [168] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [170] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_name, 1),
  [172] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [174] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [176] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_hit(void) {
  static const TSLanguage language = {
    .version = LANGUAGE_VERSION,
    .symbol_count = SYMBOL_COUNT,
    .alias_count = ALIAS_COUNT,
    .token_count = TOKEN_COUNT,
    .external_token_count = EXTERNAL_TOKEN_COUNT,
    .state_count = STATE_COUNT,
    .large_state_count = LARGE_STATE_COUNT,
    .production_id_count = PRODUCTION_ID_COUNT,
    .field_count = FIELD_COUNT,
    .max_alias_sequence_length = MAX_ALIAS_SEQUENCE_LENGTH,
    .parse_table = &ts_parse_table[0][0],
    .small_parse_table = ts_small_parse_table,
    .small_parse_table_map = ts_small_parse_table_map,
    .parse_actions = ts_parse_actions,
    .symbol_names = ts_symbol_names,
    .symbol_metadata = ts_symbol_metadata,
    .public_symbol_map = ts_symbol_map,
    .alias_map = ts_non_terminal_alias_map,
    .alias_sequences = &ts_alias_sequences[0][0],
    .lex_modes = ts_lex_modes,
    .lex_fn = ts_lex,
    .primary_state_ids = ts_primary_state_ids,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
