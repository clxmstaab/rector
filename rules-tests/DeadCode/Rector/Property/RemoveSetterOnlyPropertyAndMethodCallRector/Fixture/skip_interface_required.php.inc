<?php

namespace Rector\Tests\DeadCode\Rector\Property\RemoveSetterOnlyPropertyAndMethodCallRector\Fixture;

class SkipInterfaceRequired implements ParentInterface
{
    private $name;
    public function setName(string $name): void
    {
        $this->name = $name;
    }
}

interface ParentInterface
{
    public function setName(string $name): void;
}
