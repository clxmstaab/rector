<?php

namespace Rector\Tests\CodingStyle\Rector\ClassMethod\ReturnArrayClassMethodToYieldRector\Fixture;

use Rector\Tests\CodingStyle\Rector\ClassMethod\ReturnArrayClassMethodToYieldRector\Source\ParentTestCase;

final class MyTestCase2 extends ParentTestCase
{
    /**
     * @return mixed[]
     */
    public function provideData(): array
    {
        return [
            # some comment
            ['item']
        ];
    }
}

?>
-----
<?php

namespace Rector\Tests\CodingStyle\Rector\ClassMethod\ReturnArrayClassMethodToYieldRector\Fixture;

use Rector\Tests\CodingStyle\Rector\ClassMethod\ReturnArrayClassMethodToYieldRector\Source\ParentTestCase;

final class MyTestCase2 extends ParentTestCase
{
    public function provideData(): \Iterator
    {
        # some comment
        yield ['item'];
    }
}

?>
