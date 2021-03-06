<?php

namespace Rector\Tests\CodeQuality\Rector\Array_\ArrayThisCallToThisMethodCallRector\Fixture;

class Fixture
{
    public function run()
    {
        $values = [$this, 'giveMeMore'];
    }

    public function giveMeMore()
    {
        return 'more';
    }
}

?>
-----
<?php

namespace Rector\Tests\CodeQuality\Rector\Array_\ArrayThisCallToThisMethodCallRector\Fixture;

class Fixture
{
    public function run()
    {
        $values = $this->giveMeMore();
    }

    private function giveMeMore()
    {
        return 'more';
    }
}

?>
