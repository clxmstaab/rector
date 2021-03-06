<?php

namespace Rector\Tests\CodeQuality\Rector\Assign\SplitListAssignToSeparateLineRector\Fixture;

final class WithListFunction
{
    public function run(): void
    {
        list($a, $b) = [1, 2];
    }
}

?>
-----
<?php

namespace Rector\Tests\CodeQuality\Rector\Assign\SplitListAssignToSeparateLineRector\Fixture;

final class WithListFunction
{
    public function run(): void
    {
        $a = 1;
        $b = 2;
    }
}

?>
