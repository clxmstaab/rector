<?php

namespace Rector\Tests\TypeDeclaration\Rector\ClassMethod\AddMethodCallBasedStrictParamTypeRector\Fixture;

use Rector\Tests\TypeDeclaration\Rector\ClassMethod\AddMethodCallBasedStrictParamTypeRector\Source\Coconut;

class AssignedVariable
{
    public function getById($id)
    {
    }
}

class CallerClassAssignedVariable
{
    public function run()
    {
        $coconut = new Coconut();
        $someClass = new AssignedVariable();

        $assignedVariable = $coconut->getId();
        $someClass->getById($assignedVariable);
    }
}

?>
-----
<?php

namespace Rector\Tests\TypeDeclaration\Rector\ClassMethod\AddMethodCallBasedStrictParamTypeRector\Fixture;

use Rector\Tests\TypeDeclaration\Rector\ClassMethod\AddMethodCallBasedStrictParamTypeRector\Source\Coconut;

class AssignedVariable
{
    public function getById(\Ramsey\Uuid\UuidInterface $id)
    {
    }
}

class CallerClassAssignedVariable
{
    public function run()
    {
        $coconut = new Coconut();
        $someClass = new AssignedVariable();

        $assignedVariable = $coconut->getId();
        $someClass->getById($assignedVariable);
    }
}

?>
