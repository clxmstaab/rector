<?php

namespace Rector\Tests\DowngradePhp74\Rector\ClassMethod\DowngradeContravariantArgumentTypeRector\Fixture;

class GapLevelInterfaceParentType {}
class GapLevelInterfaceChildType extends GapLevelInterfaceParentType {}

interface GapLevelInterfaceA
{
    public function contraVariantArguments(GapLevelInterfaceChildType $type);
}

interface GapLevelInterfaceB extends GapLevelInterfaceA
{
}

interface GapLevelInterfaceC extends GapLevelInterfaceB
{
    public function contraVariantArguments(GapLevelInterfaceParentType $type);
}

?>
-----
<?php

namespace Rector\Tests\DowngradePhp74\Rector\ClassMethod\DowngradeContravariantArgumentTypeRector\Fixture;

class GapLevelInterfaceParentType {}
class GapLevelInterfaceChildType extends GapLevelInterfaceParentType {}

interface GapLevelInterfaceA
{
    public function contraVariantArguments(GapLevelInterfaceChildType $type);
}

interface GapLevelInterfaceB extends GapLevelInterfaceA
{
}

interface GapLevelInterfaceC extends GapLevelInterfaceB
{
    /**
     * @param \Rector\Tests\DowngradePhp74\Rector\ClassMethod\DowngradeContravariantArgumentTypeRector\Fixture\GapLevelInterfaceParentType $type
     */
    public function contraVariantArguments($type);
}

?>
