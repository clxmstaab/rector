<?php

namespace Rector\Tests\TypeDeclaration\Rector\ClassMethod\ReturnTypeFromStrictTypedPropertyRector\Fixture;

final class SomeClass
{
    private int $age = 100;

    public function getAge()
    {
        return $this->age;
    }
}

?>
-----
<?php

namespace Rector\Tests\TypeDeclaration\Rector\ClassMethod\ReturnTypeFromStrictTypedPropertyRector\Fixture;

final class SomeClass
{
    private int $age = 100;

    public function getAge(): int
    {
        return $this->age;
    }
}

?>
