<?php

namespace Rector\Tests\Php80\Rector\NotIdentical\StrContainsRector\Fixture;

class IdenticalStrstr
{
    public function run()
    {
        return strstr('abc', 'a') === false;
    }
}

?>
-----
<?php

namespace Rector\Tests\Php80\Rector\NotIdentical\StrContainsRector\Fixture;

class IdenticalStrstr
{
    public function run()
    {
        return !str_contains('abc', 'a');
    }
}

?>
