<?php

namespace Rector\Tests\Transform\Rector\MethodCall\MethodCallToStaticCallRector\Fixture;

use Rector\Tests\Transform\Rector\MethodCall\MethodCallToStaticCallRector\Source\AnotherDependency;

final class SomeClass
{
    private $anotherDependency;

    public function __construct(AnotherDependency $anotherDependency)
    {
        $this->anotherDependency = $anotherDependency;
    }

    public function loadConfiguration()
    {
        return $this->anotherDependency->process('value');
    }
}

?>
-----
<?php

namespace Rector\Tests\Transform\Rector\MethodCall\MethodCallToStaticCallRector\Fixture;

use Rector\Tests\Transform\Rector\MethodCall\MethodCallToStaticCallRector\Source\AnotherDependency;

final class SomeClass
{
    private $anotherDependency;

    public function __construct(AnotherDependency $anotherDependency)
    {
        $this->anotherDependency = $anotherDependency;
    }

    public function loadConfiguration()
    {
        return \StaticCaller::anotherMethod('value');
    }
}

?>
