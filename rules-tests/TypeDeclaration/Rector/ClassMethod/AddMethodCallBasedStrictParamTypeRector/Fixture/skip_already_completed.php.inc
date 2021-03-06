<?php

namespace Rector\Tests\TypeDeclaration\Rector\ClassMethod\AddMethodCallBasedStrictParamTypeRector\Fixture;

use Ramsey\Uuid\UuidInterface;
use Rector\Tests\Doctrine\Rector\ClassMethod\ChangeReturnTypeOfClassMethodWithGetIdRector\Source\Building;

final class SkipAlreadyCompleted
{
    public function process(string $name, string $random, UuidInterface $id)
    {
    }
}

final class CallerClassForSkipAlreadyCompleted
{
    public function run()
    {
        $building = new Building();
        $someClass = new SkipAlreadyCompleted();
        $someClass->process('hi', 'args', $building->getId());
    }
}
