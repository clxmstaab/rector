<?php

namespace Rector\Tests\TypeDeclaration\Rector\ClassMethod\ReturnTypeFromStrictTypedCallRector\Fixture;

final class ReturnFunction
{
    public function getData()
    {
        return getMeBool();
    }
}

function getMeBool(): bool
{
    return true;
}

?>
-----
<?php

namespace Rector\Tests\TypeDeclaration\Rector\ClassMethod\ReturnTypeFromStrictTypedCallRector\Fixture;

final class ReturnFunction
{
    public function getData(): bool
    {
        return getMeBool();
    }
}

function getMeBool(): bool
{
    return true;
}

?>
