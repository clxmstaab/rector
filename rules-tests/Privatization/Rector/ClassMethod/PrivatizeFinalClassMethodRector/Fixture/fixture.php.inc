<?php

namespace Rector\Tests\Privatization\Rector\ClassMethod\PrivatizeFinalClassMethodRector\Fixture;

final class Fixture
{
    protected function someMethod()
    {
    }
}

?>
-----
<?php

namespace Rector\Tests\Privatization\Rector\ClassMethod\PrivatizeFinalClassMethodRector\Fixture;

final class Fixture
{
    private function someMethod()
    {
    }
}

?>
