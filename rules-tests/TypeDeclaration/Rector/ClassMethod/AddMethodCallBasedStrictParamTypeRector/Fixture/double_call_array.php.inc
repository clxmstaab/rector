<?php

namespace Rector\Tests\TypeDeclaration\Rector\ClassMethod\AddMethodCallBasedStrictParamTypeRector\Fixture;

final class DoubleCallArray
{
    public function getById($id)
    {
    }
}

final class SomeCallerWithDoubleClass
{
    public function run()
    {
        $someClass = new DoubleCallArray();
        $someClass->getById(['string']);
        $someClass->getById([null]);
    }
}

?>
-----
<?php

namespace Rector\Tests\TypeDeclaration\Rector\ClassMethod\AddMethodCallBasedStrictParamTypeRector\Fixture;

final class DoubleCallArray
{
    public function getById(array $id)
    {
    }
}

final class SomeCallerWithDoubleClass
{
    public function run()
    {
        $someClass = new DoubleCallArray();
        $someClass->getById(['string']);
        $someClass->getById([null]);
    }
}

?>
