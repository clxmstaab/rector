<?php

namespace Rector\Tests\Php73\Rector\FuncCall\ArrayKeyFirstLastRector\Fixture;

class Both
{
    public function getFirstKey($items)
    {
        reset($items);
        return key($items);
    }

    public function getLastKey($items2)
    {
        end($items2);
        return key($items2);
    }
}

?>
-----
<?php

namespace Rector\Tests\Php73\Rector\FuncCall\ArrayKeyFirstLastRector\Fixture;

class Both
{
    public function getFirstKey($items)
    {
        return array_key_first($items);
    }

    public function getLastKey($items2)
    {
        return array_key_last($items2);
    }
}

?>
