<?php

namespace Rector\Tests\DowngradePhp72\Rector\ClassMethod\DowngradeParameterTypeWideningRector\Fixture;

interface SomeInterface
{
    public function test(string $input);
}

abstract class AbstractSomeAncestorClass implements SomeInterface
{
}

class SomeChildClass extends AbstractSomeAncestorClass
{
    public function test($input) // type omitted for $input
    {
        /* ... */
    }
}

?>
-----
<?php

namespace Rector\Tests\DowngradePhp72\Rector\ClassMethod\DowngradeParameterTypeWideningRector\Fixture;

interface SomeInterface
{
    /**
     * @param string $input
     */
    public function test($input);
}

abstract class AbstractSomeAncestorClass implements SomeInterface
{
}

class SomeChildClass extends AbstractSomeAncestorClass
{
    public function test($input) // type omitted for $input
    {
        /* ... */
    }
}

?>
