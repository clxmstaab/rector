<?php

namespace Rector\Tests\DeadCode\Rector\If_\RemoveUnusedNonEmptyArrayBeforeForeachRector\Fixture;

class MoreOrEqualThanOne
{
    public function run()
    {
        $values = [];
        if (count($values) >= 1) {
            foreach ($values as $value) {
                echo $value;
            }
        }
    }
}

?>
-----
<?php

namespace Rector\Tests\DeadCode\Rector\If_\RemoveUnusedNonEmptyArrayBeforeForeachRector\Fixture;

class MoreOrEqualThanOne
{
    public function run()
    {
        $values = [];
        foreach ($values as $value) {
            echo $value;
        }
    }
}

?>
