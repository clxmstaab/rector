<?php

namespace Rector\Tests\Php74\Rector\Property\TypedPropertyRector\FixtureClassLikeTypeOnly;

final class SkipScalarProperty
{
    /**
     * @var bool|null
     */
    private $isTrue = false;

    /**
     * @var array|null
     */
    private $items;

    /**
     * @var int[]|mixed[]|null
     */
    private $listOfNumbers;
}
