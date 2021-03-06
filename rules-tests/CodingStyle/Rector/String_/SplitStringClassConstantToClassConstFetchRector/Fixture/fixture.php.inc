<?php

namespace Rector\Tests\CodingStyle\Rector\String_\SplitStringClassConstantToClassConstFetchRector\Fixture;

class SomeClass
{
    const HI = true;
}

class AnotherClass
{
    public function get()
    {
        return 'Rector\Tests\CodingStyle\Rector\String_\SplitStringClassConstantToClassConstFetchRector\Fixture\SomeClass::HI';
    }
}

?>
-----
<?php

namespace Rector\Tests\CodingStyle\Rector\String_\SplitStringClassConstantToClassConstFetchRector\Fixture;

class SomeClass
{
    const HI = true;
}

class AnotherClass
{
    public function get()
    {
        return \Rector\Tests\CodingStyle\Rector\String_\SplitStringClassConstantToClassConstFetchRector\Fixture\SomeClass::class . '::HI';
    }
}

?>
