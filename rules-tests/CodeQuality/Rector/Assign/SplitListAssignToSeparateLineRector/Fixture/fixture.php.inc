<?php

namespace Rector\Tests\CodeQuality\Rector\Assign\SplitListAssignToSeparateLineRector\Fixture;

final class Fixture
{
    public function run(): void
    {
        [$a, $b] = [1, 2];
    }
}

?>
-----
<?php

namespace Rector\Tests\CodeQuality\Rector\Assign\SplitListAssignToSeparateLineRector\Fixture;

final class Fixture
{
    public function run(): void
    {
        $a = 1;
        $b = 2;
    }
}

?>
