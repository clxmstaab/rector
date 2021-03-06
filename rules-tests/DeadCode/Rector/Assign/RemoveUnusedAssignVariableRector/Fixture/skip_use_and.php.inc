<?php

declare(strict_types=1);

namespace Rector\Tests\DeadCode\Rector\Assign\RemoveUnusedAssignVariableRector\Fixture;

class SkipUseAnd
{
    public function run()
    {
        if (($format = $this->getImageFormat()) && $format !== false) {
            return 'png';
        }

        return 'non_png';
    }
}
