<?php

namespace Rector\Tests\DeadCode\Rector\BinaryOp\RemoveDuplicatedInstanceOfRector\Fixture;

class JumpAroundOne
{
    public function run($value)
    {
        $isIt = $value instanceof A && $value instanceof B && $value instanceof A;
    }
}

?>
-----
<?php

namespace Rector\Tests\DeadCode\Rector\BinaryOp\RemoveDuplicatedInstanceOfRector\Fixture;

class JumpAroundOne
{
    public function run($value)
    {
        $isIt = $value instanceof A && $value instanceof B;
    }
}

?>
