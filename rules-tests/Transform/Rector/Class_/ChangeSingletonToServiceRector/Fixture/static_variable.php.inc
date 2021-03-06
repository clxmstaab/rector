<?php

namespace Rector\Tests\Transform\Rector\Class_\ChangeSingletonToServiceRector\Fixture;

class StaticVariable
{
    private static $instance;

    public static function getThis()
    {
        if(!self::$instance) {
            self::$instance = new self;
        }

        return self::$instance;
    }
}

?>
-----
<?php

namespace Rector\Tests\Transform\Rector\Class_\ChangeSingletonToServiceRector\Fixture;

class StaticVariable
{
}

?>
