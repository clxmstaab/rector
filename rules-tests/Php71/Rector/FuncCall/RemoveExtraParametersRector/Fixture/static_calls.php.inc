<?php

namespace Rector\Tests\Php71\Rector\FuncCall\RemoveExtraParametersRector\Fixture;

final class StaticCalls
{
    public static function run()
    {
        self::perform(1);
        self::perform(1, 2);
        self::perform(1, 2, 3);
    }

    private static function perform($value)
    {
    }
}

?>
-----
<?php

namespace Rector\Tests\Php71\Rector\FuncCall\RemoveExtraParametersRector\Fixture;

final class StaticCalls
{
    public static function run()
    {
        self::perform(1);
        self::perform(1);
        self::perform(1);
    }

    private static function perform($value)
    {
    }
}

?>
