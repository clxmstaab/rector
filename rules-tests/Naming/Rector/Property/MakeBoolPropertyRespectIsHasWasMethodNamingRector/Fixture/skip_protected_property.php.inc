<?php

namespace Rector\Tests\Naming\Rector\Property\MakeBoolPropertyRespectIsHasWasMethodNamingRector\Fixture;

class SkipProtectedProperty
{
    /**
     * @var bool
     */
    protected $full = false;

    public function isFull()
    {
        return $this->full;
    }
}

?>
