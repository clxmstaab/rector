<?php

namespace Rector\Tests\Php73\Rector\FuncCall\StringifyStrNeedlesRector\Fixture;

trait ResourceHandler
{
    protected function addResourceByType(string $path)
    {
        $local = !(strpos($path, 5) === 0);
        $local = !(strpos($path, 'http') === 0);
    }
}

?>
-----
<?php

namespace Rector\Tests\Php73\Rector\FuncCall\StringifyStrNeedlesRector\Fixture;

trait ResourceHandler
{
    protected function addResourceByType(string $path)
    {
        $local = !(strpos($path, (string) 5) === 0);
        $local = !(strpos($path, 'http') === 0);
    }
}

?>
