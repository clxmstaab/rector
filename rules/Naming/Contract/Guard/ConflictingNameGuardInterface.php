<?php

declare(strict_types=1);

namespace Rector\Naming\Contract\Guard;

use Rector\Naming\Contract\RenameValueObjectInterface;

interface ConflictingNameGuardInterface
{
    public function isConflicting(RenameValueObjectInterface $renameValueObject): bool;
}
