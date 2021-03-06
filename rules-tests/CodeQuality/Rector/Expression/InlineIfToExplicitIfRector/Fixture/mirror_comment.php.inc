<?php

namespace Rector\Tests\CodeQuality\Rector\Expression\InlineIfToExplicitIfRector\Fixture;

class MirrorComment
{
    public function run()
    {
        $userId = null;

        // a comment
        is_null($userId) && $userId = 5;
    }
}

?>
-----
<?php

namespace Rector\Tests\CodeQuality\Rector\Expression\InlineIfToExplicitIfRector\Fixture;

class MirrorComment
{
    public function run()
    {
        $userId = null;

        // a comment
        if (is_null($userId)) {
            $userId = 5;
        }
    }
}

?>
