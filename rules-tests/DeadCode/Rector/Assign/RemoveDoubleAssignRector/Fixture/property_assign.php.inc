<?php

namespace Rector\Tests\DeadCode\Rector\Assign\RemoveDoubleAssignRector\Fixture;

class PropertyAssign
{
    private $numbers;

    public function create()
    {
        $value = 5;
        $this->numbers = $value;

        $this->numbers = $value;
    }
}

?>
-----
<?php

namespace Rector\Tests\DeadCode\Rector\Assign\RemoveDoubleAssignRector\Fixture;

class PropertyAssign
{
    private $numbers;

    public function create()
    {
        $value = 5;

        $this->numbers = $value;
    }
}

?>
