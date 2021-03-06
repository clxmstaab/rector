<?php

namespace Rector\Tests\TypeDeclaration\Rector\ClassMethod\AddMethodCallBasedStrictParamTypeRector\Fixture;

use Rector\Tests\TypeDeclaration\Rector\ClassMethod\AddMethodCallBasedStrictParamTypeRector\Source\Coconut;

class TestingStaticCall
{
    public static function process($name, $id)
    {
    }
}

class CallerClassForStaticCall
{
    public function run()
    {
        $coconut = new Coconut();
        TestingStaticCall::process('hi', $coconut->getId());
    }
}

?>
-----
<?php

namespace Rector\Tests\TypeDeclaration\Rector\ClassMethod\AddMethodCallBasedStrictParamTypeRector\Fixture;

use Rector\Tests\TypeDeclaration\Rector\ClassMethod\AddMethodCallBasedStrictParamTypeRector\Source\Coconut;

class TestingStaticCall
{
    public static function process(string $name, \Ramsey\Uuid\UuidInterface $id)
    {
    }
}

class CallerClassForStaticCall
{
    public function run()
    {
        $coconut = new Coconut();
        TestingStaticCall::process('hi', $coconut->getId());
    }
}

?>
