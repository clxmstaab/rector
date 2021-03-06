<?php

namespace Rector\Tests\DependencyInjection\Rector\Class_\MultiParentingToAbstractDependencyRector\Fixture;

use Rector\Tests\DependencyInjection\Rector\Class_\MultiParentingToAbstractDependencyRector\Source\AnotherDependency;
use Rector\Tests\DependencyInjection\Rector\Class_\MultiParentingToAbstractDependencyRector\Source\SomeDependency;

abstract class AbstractParentClassSkipDifferent
{
    /**
     * @var SomeDependency
     */
    private $someDependency;

    public function __construct(SomeDependency $someDependency)
    {
        $this->someDependency = $someDependency;
    }
}

class FirstChildDifferentTypes extends AbstractParentClassSkipDifferent
{
    private $anotherDependency;
    public function __construct(AnotherDependency $anotherDependency)
    {
        $this->anotherDependency = $anotherDependency;
    }
}

class SecondChildDifferentTypes extends AbstractParentClassSkipDifferent
{
    private $anotherDependency;
    public function __construct(AnotherDependency $anotherDependency)
    {
        $this->anotherDependency = $anotherDependency;
    }
}
