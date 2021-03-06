<?php

namespace spec\Rector\Tests\PhpSpecToPHPUnit\Rector\Variable\PhpSpecToPHPUnitRector\Fixture;

use PhpSpec\ObjectBehavior;

class KeepMethodSpec extends ObjectBehavior
{
    public function let()
    {
        $this->beConstructedWith(5);

        $result = $this->getSomeNumbers();
    }

    private function getSomeNumbers()
    {
        return [1, 2, 3];
    }
}

?>
-----
<?php

namespace Tests\Rector\Tests\PhpSpecToPHPUnit\Rector\Variable\PhpSpecToPHPUnitRector\Fixture;

use PhpSpec\ObjectBehavior;

class KeepMethodTest extends \PHPUnit\Framework\TestCase
{
    private \Rector\Tests\PhpSpecToPHPUnit\Rector\Variable\PhpSpecToPHPUnitRector\Fixture\KeepMethod $keepMethod;
    protected function setUp()
    {
        $this->keepMethod = new \Rector\Tests\PhpSpecToPHPUnit\Rector\Variable\PhpSpecToPHPUnitRector\Fixture\KeepMethod(5);

        $result = $this->getSomeNumbers();
    }

    private function getSomeNumbers()
    {
        return [1, 2, 3];
    }
}

?>
