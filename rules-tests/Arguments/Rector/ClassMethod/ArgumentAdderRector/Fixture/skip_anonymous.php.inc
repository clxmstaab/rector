<?php

namespace Rector\Tests\Arguments\Rector\ClassMethod\ArgumentAdderRector\Fixture;

class SkipAnonymous
{
    public function __construct()
    {
        $x = new class()
        {
            public function hydrate($context, array $data, $object)
            {
                return $object;
            }
        };
    }
}
