<?php

namespace Rector\Tests\DowngradePhp72\Rector\ClassMethod\DowngradeParameterTypeWideningRector\Fixture;

interface SkipNothingHappens
{
    public function test(array $input);
}

final class SkipNothingHappensClass implements SkipNothingHappens
{
    public function test(array $input)
    {
    }
}
