<?php

namespace Rector\DeadCode\Tests\Rector\ClassMethod\RemoveUnusedPrivateMethodRector\Fixture;

final class DemoFile
{
    private function notcalled() {
        $x = 3;
        if ($x > 2) {
            echo "yes";
        }
        return "no";
    }

    public function run()
    {
        echo "hidiho";
    }
}

?>
-----
<?php

namespace Rector\DeadCode\Tests\Rector\ClassMethod\RemoveUnusedPrivateMethodRector\Fixture;

final class DemoFile
{
    public function run()
    {
        echo "hidiho";
    }
}

?>
