<?php

namespace Rector\Tests\CodeQuality\Rector\FuncCall\ChangeArrayPushToArrayAssignRector\Fixture;

class Fixture
{
    public function run()
    {
        $items = [];
        array_push($items, $item);
    }
}

?>
-----
<?php

namespace Rector\Tests\CodeQuality\Rector\FuncCall\ChangeArrayPushToArrayAssignRector\Fixture;

class Fixture
{
    public function run()
    {
        $items = [];
        $items[] = $item;
    }
}

?>
