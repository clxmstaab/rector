<?php

namespace Rector\Tests\Php71\Rector\Assign\AssignArrayToStringRector\Fixture;

class Fixture8
{
    public function fun()
    {
        $array = [1, 2, 3];

        $someString = '';
        foreach ($array as $item) {
            $someString[] = $item;
        }
    }
}

?>
-----
<?php

namespace Rector\Tests\Php71\Rector\Assign\AssignArrayToStringRector\Fixture;

class Fixture8
{
    public function fun()
    {
        $array = [1, 2, 3];

        $someString = [];
        foreach ($array as $item) {
            $someString[] = $item;
        }
    }
}

?>
