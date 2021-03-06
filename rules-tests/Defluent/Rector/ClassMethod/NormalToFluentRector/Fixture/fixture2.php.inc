<?php

namespace Rector\Tests\Defluent\Rector\ClassMethod\NormalToFluentRector\Fixture;

use Rector\Tests\Defluent\Rector\ClassMethod\NormalToFluentRector\Source\FluentInterfaceClass;

class ActionClass2
{
    public function someFunction()
    {
        $valueObject = new FluentInterfaceClass();
        $valueObject->someFunction(1);
        $valueObject->otherFunction(2);
    }
}

?>
-----
<?php

namespace Rector\Tests\Defluent\Rector\ClassMethod\NormalToFluentRector\Fixture;

use Rector\Tests\Defluent\Rector\ClassMethod\NormalToFluentRector\Source\FluentInterfaceClass;

class ActionClass2
{
    public function someFunction()
    {
        $valueObject = new FluentInterfaceClass();
        $valueObject->someFunction(1)->otherFunction(2);
    }
}

?>
