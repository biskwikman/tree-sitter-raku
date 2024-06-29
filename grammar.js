module.exports = grammar({
  name: 'raku',

  rules: {
    source_file: $ => repeat($._definition),

    _definition: $ => choice(
      $.function_definition,
      $.variable_definition,
    ),

    function_definition: $ => seq(
      'func',
      $.parameter_list,
      $._type,  
    ),

    variable_definition: $ => seq(
      $.scope_designator,
      $.sigil,
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
      'bool'
    ),

    identifier: $ => /[a-z]+/,

    sigil: $ => choice(
      '$',
      '@',
      '%',
      '&',
    )

  }
});
