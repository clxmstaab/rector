<?php

namespace Rector\Tests\Php80\Rector\Class_\ClassPropertyAssignToConstructorPromotionRector\Fixture;

class MatchChangedVariable
{
    /**
     * @var float
     */
    public $x;

    public function __construct(float $a = 0.0)
    {
        $this->x = $a;
    }
}

?>
-----
<?php

namespace Rector\Tests\Php80\Rector\Class_\ClassPropertyAssignToConstructorPromotionRector\Fixture;

class MatchChangedVariable
{
    public function __construct(public float $x = 0.0)
    {
    }
}

?>
