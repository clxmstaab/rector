<?php

namespace Rector\Tests\CodeQuality\Rector\If_\CombineIfRector\Fixture;

class SkipChildElse
{
    public function run()
    {
        if ($cond1) {
            if ($cond2) {
                return 'foo';
            } else {
                return 'bar';
            }
        }
    }
}
