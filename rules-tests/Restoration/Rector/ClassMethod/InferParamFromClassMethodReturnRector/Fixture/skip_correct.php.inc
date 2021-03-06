<?php

namespace Rector\Tests\Restoration\Rector\ClassMethod\InferParamFromClassMethodReturnRector\Fixture;

use PhpParser\Node\Scalar\String_;
use Rector\Tests\Restoration\Rector\ClassMethod\InferParamFromClassMethodReturnRector\Source\SomeType;

class SkipCorrect extends SomeType
{
    public function getNodeTypes(): array
    {
        return [String_::class];
    }

    /**
     * @param String_ $node
     */
    public function process(\PhpParser\Node $node)
    {
    }
}
