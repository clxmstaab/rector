<?php

declare(strict_types=1);

namespace Rector\Tests\DeadCode\Rector\Assign\RemoveUnusedAssignVariableRector\Fixture;

class AssignConcat
{
    public function run()
    {
        $removeMe = 'a' . 5 . 'b';
    }
}

?>
-----
<?php

declare(strict_types=1);

namespace Rector\Tests\DeadCode\Rector\Assign\RemoveUnusedAssignVariableRector\Fixture;

class AssignConcat
{
    public function run()
    {
    }
}

?>
