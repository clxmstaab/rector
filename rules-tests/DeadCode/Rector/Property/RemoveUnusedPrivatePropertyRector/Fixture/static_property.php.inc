<?php

namespace Rector\Tests\DeadCode\Rector\Property\RemoveUnusedPrivatePropertyRector\Fixture;

class StaticProperty
{
    public static $publicProperty;
    protected static $protectedProperty;
    private static $privateProperty;
    private static $unusedPrivateProperty;

    public function foo()
    {
        return $this::$privateProperty;
    }
}

?>
-----
<?php

namespace Rector\Tests\DeadCode\Rector\Property\RemoveUnusedPrivatePropertyRector\Fixture;

class StaticProperty
{
    public static $publicProperty;
    protected static $protectedProperty;
    private static $privateProperty;

    public function foo()
    {
        return $this::$privateProperty;
    }
}

?>
