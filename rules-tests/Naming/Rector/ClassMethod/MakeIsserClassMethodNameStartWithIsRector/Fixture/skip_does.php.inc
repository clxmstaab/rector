<?php

declare(strict_types=1);

namespace Rector\Tests\Naming\Rector\ClassMethod\MakeIsserClassMethodNameStartWithIsRector\Fixture;

final class SkipDoes
{
    /**
     * @var bool
     */
    private $doesAcceptBitcoins = false;

    public function doesAcceptBitcoins(): bool
    {
        return $this->doesAcceptBitcoins;
    }
}
