<?php

namespace Rector\Tests\CodingStyle\Rector\Ternary\TernaryConditionVariableAssignmentRector\Fixture;

function skip_ternary_with_variable_assignment($value)
{
    $x = $value ? $a = 1 : $a = 0;
}
