<?php

namespace Rector\Tests\CodeQualityStrict\Rector\Variable\MoveVariableDeclarationNearReferenceRector\Fixture;

class SkipUsedInNextTernary
{
    function myMethod()
    {
        $position = getPosition();

        rand(0, 1) === 1
            ? $position
            : $position + 1;
    }
}

?>
