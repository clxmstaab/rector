<?php

namespace Rector\Tests\DowngradePhp80\Rector\ClassMethod\DowngradeTrailingCommasInParamUseRector\Fixture;

class InStaticCall
{
    public function run(): void
    {
        $string = self::getString('foo',);
        // ...
    }
    public static function getString(...$params): string
    {
        return implode(', ', $params);
    }
}

?>
-----
<?php

namespace Rector\Tests\DowngradePhp80\Rector\ClassMethod\DowngradeTrailingCommasInParamUseRector\Fixture;

class InStaticCall
{
    public function run(): void
    {
        $string = self::getString('foo');
        // ...
    }
    public static function getString(...$params): string
    {
        return implode(', ', $params);
    }
}

?>
