#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 17
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 23
#define ALIAS_COUNT 0
#define TOKEN_COUNT 14
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 5
#define PRODUCTION_ID_COUNT 1

enum ts_symbol_identifiers {
  anon_sym_func = 1,
  aux_sym_variable_definition_token1 = 2,
  anon_sym_my = 3,
  anon_sym_our = 4,
  sym_assignment_operator = 5,
  anon_sym_LPAREN = 6,
  anon_sym_RPAREN = 7,
  anon_sym_bool = 8,
  sym_identifier = 9,
  anon_sym_DOLLAR = 10,
  anon_sym_AT = 11,
  anon_sym_PERCENT = 12,
  anon_sym_AMP = 13,
  sym_source_file = 14,
  sym__definition = 15,
  sym_function_definition = 16,
  sym_variable_definition = 17,
  sym_scope_designator = 18,
  sym_parameter_list = 19,
  sym__type = 20,
  sym_sigil = 21,
  aux_sym_source_file_repeat1 = 22,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_func] = "func",
  [aux_sym_variable_definition_token1] = "variable_definition_token1",
  [anon_sym_my] = "my",
  [anon_sym_our] = "our",
  [sym_assignment_operator] = "assignment_operator",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [anon_sym_bool] = "bool",
  [sym_identifier] = "identifier",
  [anon_sym_DOLLAR] = "$",
  [anon_sym_AT] = "@",
  [anon_sym_PERCENT] = "%",
  [anon_sym_AMP] = "&",
  [sym_source_file] = "source_file",
  [sym__definition] = "_definition",
  [sym_function_definition] = "function_definition",
  [sym_variable_definition] = "variable_definition",
  [sym_scope_designator] = "scope_designator",
  [sym_parameter_list] = "parameter_list",
  [sym__type] = "_type",
  [sym_sigil] = "sigil",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_func] = anon_sym_func,
  [aux_sym_variable_definition_token1] = aux_sym_variable_definition_token1,
  [anon_sym_my] = anon_sym_my,
  [anon_sym_our] = anon_sym_our,
  [sym_assignment_operator] = sym_assignment_operator,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [anon_sym_bool] = anon_sym_bool,
  [sym_identifier] = sym_identifier,
  [anon_sym_DOLLAR] = anon_sym_DOLLAR,
  [anon_sym_AT] = anon_sym_AT,
  [anon_sym_PERCENT] = anon_sym_PERCENT,
  [anon_sym_AMP] = anon_sym_AMP,
  [sym_source_file] = sym_source_file,
  [sym__definition] = sym__definition,
  [sym_function_definition] = sym_function_definition,
  [sym_variable_definition] = sym_variable_definition,
  [sym_scope_designator] = sym_scope_designator,
  [sym_parameter_list] = sym_parameter_list,
  [sym__type] = sym__type,
  [sym_sigil] = sym_sigil,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_func] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_variable_definition_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_my] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_our] = {
    .visible = true,
    .named = false,
  },
  [sym_assignment_operator] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_LPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_bool] = {
    .visible = true,
    .named = false,
  },
  [sym_identifier] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_DOLLAR] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_AT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PERCENT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_AMP] = {
    .visible = true,
    .named = false,
  },
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym__definition] = {
    .visible = false,
    .named = true,
  },
  [sym_function_definition] = {
    .visible = true,
    .named = true,
  },
  [sym_variable_definition] = {
    .visible = true,
    .named = true,
  },
  [sym_scope_designator] = {
    .visible = true,
    .named = true,
  },
  [sym_parameter_list] = {
    .visible = true,
    .named = true,
  },
  [sym__type] = {
    .visible = false,
    .named = true,
  },
  [sym_sigil] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_source_file_repeat1] = {
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
  [3] = 3,
  [4] = 4,
  [5] = 5,
  [6] = 6,
  [7] = 7,
  [8] = 8,
  [9] = 9,
  [10] = 10,
  [11] = 11,
  [12] = 12,
  [13] = 13,
  [14] = 14,
  [15] = 15,
  [16] = 16,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(11);
      ADVANCE_MAP(
        '$', 21,
        '%', 23,
        '&', 24,
        '(', 17,
        ')', 18,
        '=', 16,
        '@', 22,
        'b', 5,
        'f', 7,
        'm', 9,
        'o', 8,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(0);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(13);
      END_STATE();
    case 1:
      if (lookahead == 'c') ADVANCE(12);
      END_STATE();
    case 2:
      if (lookahead == 'l') ADVANCE(19);
      END_STATE();
    case 3:
      if (lookahead == 'n') ADVANCE(1);
      END_STATE();
    case 4:
      if (lookahead == 'o') ADVANCE(2);
      END_STATE();
    case 5:
      if (lookahead == 'o') ADVANCE(4);
      END_STATE();
    case 6:
      if (lookahead == 'r') ADVANCE(15);
      END_STATE();
    case 7:
      if (lookahead == 'u') ADVANCE(3);
      END_STATE();
    case 8:
      if (lookahead == 'u') ADVANCE(6);
      END_STATE();
    case 9:
      if (lookahead == 'y') ADVANCE(14);
      END_STATE();
    case 10:
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(10);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(20);
      END_STATE();
    case 11:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 12:
      ACCEPT_TOKEN(anon_sym_func);
      END_STATE();
    case 13:
      ACCEPT_TOKEN(aux_sym_variable_definition_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(13);
      END_STATE();
    case 14:
      ACCEPT_TOKEN(anon_sym_my);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(anon_sym_our);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(sym_assignment_operator);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(anon_sym_bool);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(sym_identifier);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(20);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(anon_sym_DOLLAR);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(anon_sym_AT);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(anon_sym_PERCENT);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(anon_sym_AMP);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 0},
  [2] = {.lex_state = 0},
  [3] = {.lex_state = 0},
  [4] = {.lex_state = 0},
  [5] = {.lex_state = 0},
  [6] = {.lex_state = 0},
  [7] = {.lex_state = 0},
  [8] = {.lex_state = 0},
  [9] = {.lex_state = 0},
  [10] = {.lex_state = 0},
  [11] = {.lex_state = 0},
  [12] = {.lex_state = 10},
  [13] = {.lex_state = 10},
  [14] = {.lex_state = 0},
  [15] = {.lex_state = 0},
  [16] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_func] = ACTIONS(1),
    [aux_sym_variable_definition_token1] = ACTIONS(1),
    [anon_sym_my] = ACTIONS(1),
    [anon_sym_our] = ACTIONS(1),
    [sym_assignment_operator] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_bool] = ACTIONS(1),
    [anon_sym_DOLLAR] = ACTIONS(1),
    [anon_sym_AT] = ACTIONS(1),
    [anon_sym_PERCENT] = ACTIONS(1),
    [anon_sym_AMP] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(10),
    [sym__definition] = STATE(2),
    [sym_function_definition] = STATE(2),
    [sym_variable_definition] = STATE(2),
    [sym_scope_designator] = STATE(4),
    [aux_sym_source_file_repeat1] = STATE(2),
    [ts_builtin_sym_end] = ACTIONS(3),
    [anon_sym_func] = ACTIONS(5),
    [anon_sym_my] = ACTIONS(7),
    [anon_sym_our] = ACTIONS(7),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 5,
    ACTIONS(5), 1,
      anon_sym_func,
    ACTIONS(9), 1,
      ts_builtin_sym_end,
    STATE(4), 1,
      sym_scope_designator,
    ACTIONS(7), 2,
      anon_sym_my,
      anon_sym_our,
    STATE(3), 4,
      sym__definition,
      sym_function_definition,
      sym_variable_definition,
      aux_sym_source_file_repeat1,
  [20] = 5,
    ACTIONS(11), 1,
      ts_builtin_sym_end,
    ACTIONS(13), 1,
      anon_sym_func,
    STATE(4), 1,
      sym_scope_designator,
    ACTIONS(16), 2,
      anon_sym_my,
      anon_sym_our,
    STATE(3), 4,
      sym__definition,
      sym_function_definition,
      sym_variable_definition,
      aux_sym_source_file_repeat1,
  [40] = 2,
    STATE(13), 1,
      sym_sigil,
    ACTIONS(19), 4,
      anon_sym_DOLLAR,
      anon_sym_AT,
      anon_sym_PERCENT,
      anon_sym_AMP,
  [50] = 1,
    ACTIONS(21), 4,
      anon_sym_DOLLAR,
      anon_sym_AT,
      anon_sym_PERCENT,
      anon_sym_AMP,
  [57] = 1,
    ACTIONS(23), 4,
      ts_builtin_sym_end,
      anon_sym_func,
      anon_sym_my,
      anon_sym_our,
  [64] = 1,
    ACTIONS(25), 4,
      ts_builtin_sym_end,
      anon_sym_func,
      anon_sym_my,
      anon_sym_our,
  [71] = 2,
    ACTIONS(27), 1,
      anon_sym_LPAREN,
    STATE(9), 1,
      sym_parameter_list,
  [78] = 2,
    ACTIONS(29), 1,
      anon_sym_bool,
    STATE(6), 1,
      sym__type,
  [85] = 1,
    ACTIONS(31), 1,
      ts_builtin_sym_end,
  [89] = 1,
    ACTIONS(33), 1,
      anon_sym_RPAREN,
  [93] = 1,
    ACTIONS(35), 1,
      sym_identifier,
  [97] = 1,
    ACTIONS(37), 1,
      sym_identifier,
  [101] = 1,
    ACTIONS(39), 1,
      anon_sym_bool,
  [105] = 1,
    ACTIONS(41), 1,
      sym_assignment_operator,
  [109] = 1,
    ACTIONS(43), 1,
      aux_sym_variable_definition_token1,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 20,
  [SMALL_STATE(4)] = 40,
  [SMALL_STATE(5)] = 50,
  [SMALL_STATE(6)] = 57,
  [SMALL_STATE(7)] = 64,
  [SMALL_STATE(8)] = 71,
  [SMALL_STATE(9)] = 78,
  [SMALL_STATE(10)] = 85,
  [SMALL_STATE(11)] = 89,
  [SMALL_STATE(12)] = 93,
  [SMALL_STATE(13)] = 97,
  [SMALL_STATE(14)] = 101,
  [SMALL_STATE(15)] = 105,
  [SMALL_STATE(16)] = 109,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0, 0, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [9] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1, 0, 0),
  [11] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0),
  [13] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(8),
  [16] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(5),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [21] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_scope_designator, 1, 0, 0),
  [23] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_definition, 3, 0, 0),
  [25] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_definition, 5, 0, 0),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [31] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [35] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sigil, 1, 0, 0),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [39] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_list, 2, 0, 0),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef TREE_SITTER_HIDE_SYMBOLS
#define TS_PUBLIC
#elif defined(_WIN32)
#define TS_PUBLIC __declspec(dllexport)
#else
#define TS_PUBLIC __attribute__((visibility("default")))
#endif

TS_PUBLIC const TSLanguage *tree_sitter_raku(void) {
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
