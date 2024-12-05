module.exports = grammar({
  name: 'raku',

  rules: {
    source_file: $ => repeat($._definition),

    _definition: $ => choice(
      $.variable_definition,
      $.subroutine_definition,
    ),

    subroutine_definition: $ => seq(
      'func',
      $.parameter_list,
      $._type,  
    ),

    variable_definition: $ => seq(
      $.scope_designator,
      $.sigil,
      optional($.twigil),
      $.identifier,
      $.assignment_operator,
      /\d+/,
    ),

    scope_designator: $ => choice(
      'my',
      'our',
    ),

    assignment_operator: $ => '=',

    parameter_list: $ => seq(

      '(',
      // TODO: Parameters
      ')',
    ),

    _type: $ => choice(
      $.int
    ),

    int: $ => optional(
      'uint',
    ),

    identifier: $ => /[a-z]+/,

    sigil: $ => choice(
      '$',
      '@',
      '%',
      '&',
    ),

    twigil: $ => choice(
      '*',
      '?',
      '!',
      '.',
      '<',
      '^',
      ':',
      '=',
      '~',
    ),

  }
});
