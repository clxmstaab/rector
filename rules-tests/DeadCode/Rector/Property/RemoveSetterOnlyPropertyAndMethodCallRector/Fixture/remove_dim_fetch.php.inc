<?php

namespace Rector\Tests\DeadCode\Rector\Property\RemoveSetterOnlyPropertyAndMethodCallRector\Fixture;

class RemoveDimFetch
{
    private $name;

    public function setName($name)
    {
        $this->name[] = $name;
    }
}

?>
-----
<?php

namespace Rector\Tests\DeadCode\Rector\Property\RemoveSetterOnlyPropertyAndMethodCallRector\Fixture;

class RemoveDimFetch
{
}

?>
